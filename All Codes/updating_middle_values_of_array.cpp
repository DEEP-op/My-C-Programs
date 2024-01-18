#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "enter the value of array"<<endl;

    for(int i = 0; i<5; i++ )
    {
        cin>> arr[i];
    }

    for(int i = 0; i<5; i++ )
    {
        cout<<"list of the array "<< i <<" "<<arr[i]<<endl;                

    } 

    int mid = 5/2;
    arr[mid]=arr[mid]+5;
    cout << "updated value :"<<arr[mid]<<endl;

    
    for(int i = 0; i<5; i++ )
    {
        cout<<"list of the array "<<arr[i]<<endl;                

    } 
    return 0;
}