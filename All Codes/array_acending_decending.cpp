#include<iostream>

using namespace std;

int main()
{
    //taking the length of the arrary from the user

    int a;
    cout << "enter the length of an array ";
    cin >> a;
    int arr[a];

    //taking the input of array from user

    int i;  
    for(i=0 ; i<a; i++)
    {
        cout << "enter the value for array " << i << " : ";
        cin>> arr[i];
    }

    //printing the value of array entered

    for ( i = 0; i < a ; i++)
    {
        cout << "Position : " << i << " ,  Value : " << arr[i] << " \n";
    }
    
}
    

