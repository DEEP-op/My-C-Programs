#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // string st = "hello!! wassup ";

    // ofstream out("file_operations.txt");
    // out << st;


    // string st2;
    // ifstream in("file_operations.txt");
    // getline(in,st2);
    // cout << st2;
    // return 0;

    string s;
    cout << "enter the string : ";
    getline(cin,s);
    ofstream out("file_operations.txt");
    out << s;


    
    return 0;
}