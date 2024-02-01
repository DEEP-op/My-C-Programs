#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

class Triangle
{
    public :
    double b,h;
    void getdetails()
    {
        cin >> b >> h;

    }

    double at()
    {
        double area = (0.5*b*h);

        return area;
    }

};

class Hypotenuse : public Triangle
{
    public:

    double c,e;
    double hypotenuse()
    {
          c  = sqrt(b*b + h*h);

          return c;
    }

    double perimeter()
    {
        e = (b+h+c);

        return e;
    }
};

int main()
{
    // double b,h,c;
    // cin >> b >> h ;
    // c = sqrt(b*b + h*h);
    // cout << "hypotenuse: " << setprecision(4) << c << endl;
    // cout << "Area: " << setprecision(4) << (0.5*b*h) << endl;
    // cout << "Perimeter: " << setprecision(4) << (b+h+c) << endl;

    Hypotenuse h;
    h.getdetails();
    cout << "Hypotenuse: " << setprecision(4) << h.hypotenuse() << endl;
    cout << "Area: " << setprecision(4) << h.at() << endl;
    cout << "Perimeter: " << setprecision(4) << h.perimeter() << endl;
    
    return 0;
}