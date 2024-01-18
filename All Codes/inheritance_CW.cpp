#include<iostream>
using namespace std;

class name{
    public:
    void putname()
    {
        cout<< "your name is x"<<endl;
    }
};

class address : public name{
    public:
    void putaddress()
    {
        cout << "your address is LPU"<<endl;
    }
};

class marks : public address{
    public:
    void givemarks(){
        cout << "your marks are 0"<<endl;
    }

};

int main()
{
    marks m;
    m.putname();
    m.putaddress();
    m.givemarks();

return 0;
}