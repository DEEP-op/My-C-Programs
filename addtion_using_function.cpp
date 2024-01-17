#include<iostream>
#include<conio.h>

using namespace std;

int add(int a, int b)
{
    return a+b;
}


int main()
{
    int x,y,sum;

    cout << "enter the value of the X and Y " ;
    cin >> x >> y ;


    sum = add(x,y);
    cout << "the value of " << x << "and " << y << " is  " << sum ;

}