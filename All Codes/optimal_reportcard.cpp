#include<iostream>
using namespace std;

int total;

class student
{
public:
    int rollno;
    string name;
    string address;

    student(int r, string n, string add)
    {
        rollno = r;
        name = n;
        address = add;

    }; 
     void setdetails()
        {
            cout << " ROll NO : " << rollno << endl;
            cout << " Name :" << name << endl;
            cout << " Address : " << address << endl;
            cout << endl;
        }           
};

class marks : public student
{
public:
    int mark[5];
     marks(int r, string n, string add,int *m):student(r,n,add){
     	for(int i=0;i<5;i++){
     		mark[i]=m[i];
		 }
	 }
	 void set(){
	 	cout<<"marks";
	 }
  
};



int main()
{
    string name,add;
    int rollno;
    int mark[5];
	cout<<"name:- ";
	cin>>name;
	cout<<"Address:- ";
	cin>>add;
	cout<<"enter roll no:- ";   
	cin>>rollno;
	for(int i= 0; i<5; i++)
        {
            cin >> mark[i];
        }
    marks m(rollno,name,add,mark);
	m.setdetails();
	


    return 0;
}