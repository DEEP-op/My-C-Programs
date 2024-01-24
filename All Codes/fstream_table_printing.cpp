#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//     int n;
//     cout <<"enter the number whose table u want to print : ";
//     cin >> n;
//     ofstream out("file_operations.txt");
    

//     for(int i=1; i<=10; i++)
//     {
//         out << n << " * " << i << " = " << n*i << endl; 
//     }

//     out.close();
    string s;
    ifstream i("file_operations.txt");
    while(getline(i,s))
    {
        cout << s<<endl; 
    }

    return 0;
}