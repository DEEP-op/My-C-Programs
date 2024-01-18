#include<iostream>
using namespace std;
int main()
{
    int arr[5];

     arr[0]=1;
     arr[1]=2;
     arr[2]=3;
     arr[3]=4;
     arr[4]=5;
     
//if the array input has been taken fron user than int i = arr[n]-1 would be there
     for(int i=0; i < 5; i)
     {
        cout << arr[i];
     }

    cout<<endl;

     for(int i=5-1; i >= 0 ; --i)
     {
        cout << arr[i];
     }

return 0;
}