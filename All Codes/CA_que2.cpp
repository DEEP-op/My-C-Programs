#include<iostream>
using namespace std;
double speed1;
double speed2;
double speed3;
class car
{
    public:
    double distance;
    double time;

    void getdetailscar()
    {
        cout << "enter distance and time for car :"<<endl;
        cin >> distance >> time;
    }

    void carspeed()
    {
        cout << "car speed :";
        speed1 = (distance/time);
        cout << speed1<<endl;
    }

};

class bike 
{
    public:
    double distance;
    double time;

    void getdetailsbike()
    {
        cout << "enter distance and time for bike :"<<endl;
        cin >> distance>>time;
    }

    void bikespeed()
    {
        cout << "bike speed :";
        speed2 = (distance/time);
        cout << speed2<<endl;
    }
};

class boat
{
    public: 
    double distance;
    double time;

    void getdetailsboat()
    {
        cout << "enter distance and time for boat :"<<endl;
        cin >> distance>>time;
    }

     void boatspeed()
    {
        cout << "boat speed :";
        speed3 = (distance/time);
        cout << speed3<<endl;
    }

};

class customvehicle : public car ,public boat,public bike 
{
    public:

    void averagespeed()
    {
        cout  << "Average speed :";
        double avgspeed = (speed1 + speed2 + speed3)/3;
        cout << avgspeed<<endl; 
    }

};

int main()
{
    customvehicle c;
    c.getdetailscar();
    c.getdetailsbike();
    c.getdetailsboat();
    c.carspeed();
    c.bikespeed();
    c.boatspeed();
    c.averagespeed();

    return 0;

}