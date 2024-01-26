#include<iostream>
using namespace std;
int totalseats = 100;
class course
{
    public:
    int ccode;
    string ctitle;
    int bseats;

    course(int cc, string ct, int bs)
    {
        ccode = cc;
        ctitle = ct;
        bseats =bs;
    }


    void seatsleft()
    {
        cout << "Course Code: "<< ccode << endl;
        cout << "Available Seats: " << (totalseats - bseats) << endl;        
    }

  
};

int main()
{
    int ccode, bseats;
    string ctitle;

    
    cout << "enter the ccode " << endl;
    cin >>  ccode ;

    cin.ignore();

    cout <<  " enter the ctitle " << endl;
    getline(cin,ctitle);

    cout << "enter the bseats " << endl;
    cin >> bseats;

    course c(ccode,ctitle,bseats);
    c.seatsleft();    


    return 0;
}