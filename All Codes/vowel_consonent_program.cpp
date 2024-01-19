#include<iostream>
using namespace std;
int main()
{
    string line;
    cout<<"enter your line of string"<<endl;
    getline(cin,line);
    int vowel=0;
    int consonent = 0;
    int spaces = 0;

    for(int i =0;  i<line.length(); i++)
    {
        if(line[i]=='A' || line[i]=='a' ||  line[i]=='E' || line[i]=='e' || line[i]=='I' || line[i]=='i' || line[i] == 'O' || line[i]=='o' || line[i] == 'U' || line[i]=='u'){
            vowel = vowel + 1;
        }

    else if(line[i]== ' '){
        spaces= spaces+1;

    }

    else{
        consonent=consonent+1;
    }
    }
    cout<< "vowel = " << vowel<< endl;
    cout<< "consonent = " <<  consonent ;
    cout<< "spaces = " <<  spaces;
return 0;
}