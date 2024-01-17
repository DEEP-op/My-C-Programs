#include <iostream>

using namespace std;

int main()
{
    int car[2][2];
    cout << "enter the value for the array : "<< endl;

    for(int i=0; i<=1; i++)
    {
        for(int j=0 ; j <= 1 ; j++)
        {
            cin >> car[i][j] ;
        }
    }

    cout << "printing the values for the array you have entered : " << endl;

    for(int i = 0 ; i<=1; i++)
    {
        for(int j = 0; j<=1; j++)
        {
            cout << car[i][j] << "\t";
            
        }
        cout<<"\n";
    }

}
