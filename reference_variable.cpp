#include<iostream>
using namespace std;
int c = 20;
int main()
{
    // int a,b,c;
    // cin>>a>>b;
    // c = a+b;
    // cout << c<<endl;
    // cout<< ::c;

    float x = 455;
    float &y = x;
    float &z = x;
    cout << "z is equal to " << z<< "\n";
    z=  30;

    cout <<x<<endl;
    cout <<y<<endl;
    cout << z;


return 0;
}