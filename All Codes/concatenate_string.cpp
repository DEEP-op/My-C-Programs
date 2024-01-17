#include<iostream>
using namespace std;

int main()
{
    string car ("this is a car");
    string bus ("this is a bus");


    car = car +" "+ bus ;
    cout << car << endl;



     string car1 ("this is a car");
    string bus1 ("this is a bus");

    car1.append(bus1);
    cout << car1 << endl;
}