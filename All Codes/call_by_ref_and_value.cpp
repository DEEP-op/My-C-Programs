#include<iostream>
using namespace std;

// call by reference

void update(int &n)
{
    n++ ;
}
//call by value 
void update1(int i)
{
    i++;
}

int main()
{
    int n=5;
    int i =10;
    cout << "before " << n << endl;
    update(n);
    cout << "after " << n << endl;
    
    cout << endl;

    
    cout << "before " << i << endl;
    update1(i);
    cout << "after " << i << endl;

    return 0;
}