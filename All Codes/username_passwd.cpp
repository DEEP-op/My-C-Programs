#include<iostream>
using namespace std;

int main()
{
    string username;
    string password;

    
    getline(cin,username);
    getline(cin,password);

    cout << "Name: " << username << endl;
    cout << "Password: " << password << endl;



    return 0;
}