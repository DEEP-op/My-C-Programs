#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter array size :" << endl;
    cin >> n;
    int * ptr = new int[n];

    for(int i=0; i<n; i++)
    {
        cout << "enter the " << ptr[i] <<endl;
        cin >> ptr[i];
    }

    delete[] ptr;

        for(int i=0; i<n; i++)
    {
        cout << ptr[i] <<" ";
    }
    

}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cin >> a;

//     int arr[a];

//     for(int i=0; i< a ; i++)
//     {
//         cin >> arr[i];

//     }

//     cout <<endl;

//         for(int i=0; i< a ; i++)
//     {
//         cout << arr[i] << endl;
        
//     }
//     return 0;
// }


