#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    cout<<"enter the value of N no. of star lines you want to print : "<<endl;
    cin>>n;
    

    for(i=0;i<n;i++)
    {

        for(j=0;j<=i;j++)
        {
            cout<< " * ";
        }
        cout<<endl;
    }
return 0;
}

