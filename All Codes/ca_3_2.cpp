#include<iostream>
using namespace std;

int main()
{
    int n;
    cin  >> n;

    double *arr1 = new double[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }

     double *arr2 = new double[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
    }

    for(int i = 0; i<n; i++)
    {
        cout << arr1[i] + arr2[i] << " " ;
    }

    delete[] arr1;
    delete[] arr2;


    return 0;
}