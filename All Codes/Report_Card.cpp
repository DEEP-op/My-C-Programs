#include<iostream>
using namespace std;

int total;
int percentage;

class student
{
public:
    int rollno;
    char name[10];
    char address[20];

    void getdetails()
    {
        cout << "Enter the roll no" << endl;
        cin >> rollno;
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your address" << endl;
        cin >> address;
        cout << endl;
    }

    

     void setdetails()
        {
            cout << " ROll NO : " << rollno << endl;
            cout << " Name :" << name << endl;
            cout << " Address : " << address << endl;
            cout << endl;
        }           
};

class marks
{
public:
    int a,b,c,d,e;
     
     void getmarks()
     {
        cout << "enter the marks of subject A ";
        cin >> a;
        cout << "enter the marks of subject B ";
        cin >> b;
        cout << "enter the marks of subject C ";
        cin >> c;
        cout << "enter the marks of subject D ";
        cin >> d;
        cout << "enter the marks of subject E ";
        cin >> e;
        cout << endl;
     }

     void setmarks()
     {
        cout << "Marks of A : " << a <<endl;
        cout << "Marks of B : " << b <<endl;
        cout << "Marks of C : " << c <<endl;
        cout << "Marks of D : " << d <<endl;
        cout << "Marks of E : " << e <<endl;
        cout << endl;
     }

     void gettotal()
     {
        
        total = a+b+c+d+e;

        cout << "Total marks are : " <<  total << endl;
        cout << endl;
     }
};

class grades : public student , public marks
{
public:
    void getpercentage()
    {
        
        percentage = total/5;

        cout << "Your percentage is  : " << percentage << " %" << endl;
        cout << endl;

    }

    void setgrades()
    {
        if(percentage<=100 && percentage>90)
        {
            cout << "Your grade is A+ " << endl;
        } 
        else if(percentage<=90 && percentage>80)
        {
            cout << "Your grade is B+ " << endl;
        } 
        else if(percentage<=80 && percentage>70)
        {
            cout << "Your grade is C+ " << endl;
        } 
        else if(percentage<=70 && percentage>60)
        {
            cout << "Your grade is D " << endl;
        } 
        else if(percentage<=60 && percentage>50)
        {
            cout << "Your grade is E " << endl;
        } 
        else
        {
            cout << "Your grade is F " << endl;
        } 
    }
};



int main()
{
    grades g;
    g.getdetails();
    g.setdetails();
    g.getmarks();
    g.setmarks();
    g.gettotal();
    g.getpercentage();
    g.setgrades();

    return 0;
}