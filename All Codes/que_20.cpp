#include<iostream>
using namespace std;

class Occurrence
{
    string s;
    char c;
    
    public:
     void setvalues(string sh, char ch)
        {
            s = sh;
            c = ch;
            
        }
    
    int countOccurrence()
    {
        int count =0;
        for(int i=0; i<s.length(); i++ )
        {
            if( s[i] == c)
            {
                count = count  + 1;
            }
        }
        return count;
    }
};

int main()
{
    string sh;
    char ch;
    getline(cin,sh);
    cin >> ch;
    Occurrence o;
    o.setvalues(sh,ch);
    o.countOccurrence();
    
    return 0;
    
}