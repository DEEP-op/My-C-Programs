#include<iostream>
using namespace std;
int main()
{
    cout<<"welcome to the mini calculator  "<<endl;
    cout<<"Enter the number and operator you want to perform  "<<endl;
    char op;
    cout << "enter the operator you want to perform : "<<endl;
    cin>> op;
    float num1,num2;
    cout << "Enter the num1 : "<<endl;
    cin >> num1  ;
    cout << "Enter the num2 : "<<endl;
    cin >> num2  ;

    switch (op)
    {
    case '+':
    cout << "The addition of your numbers are : "<<endl;
    cout << num1+num2;
    
        break;

    case '-':
    cout << "The substraction of your numbers are : "<<endl;
    cout << num1-num2;
    
        break;

    case '*':
    cout << "The multiplication of your numbers are : "<<endl;
    cout << num1*num2;
    
        break;

    case '/':
    cout << "The division of your numbers are : "<<endl;
    cout << num1/num2;
    
        break;

    default:
    cout << "you have to enter the somethig "<<endl;
    cout << "OR ERROR! the opartor is not correct"<<endl;
        break;
    }

return 0;
}