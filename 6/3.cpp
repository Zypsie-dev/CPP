//Create an abstract base class place with data members name, address and mobile and member 
//function getdata( ) and display as pure virtual function. Based on this class, derive a new Classes 
//KTM and MNR  to inherit all features .
#include<iostream>
#include<string.h>
using namespace std;
class place{
    protected:
    string name,address;
    long int mobile;  
    public:
    void get_data()
    {
        cout<<"Enter name, address and phn number: "<<endl;
        cin>>name>>address;
        cin>>mobile;
    }
    virtual void display()=0;
};
class KTM:public place{
    public:
    void display()
    {
        cout<<"Name -> "<<name<<endl;
        cout<<"Address -> "<<address<<endl;
        cout<<"Mobile number -> "<<"+977"<<mobile<<endl;
    }
};
class MNR:public place{
    public:
    void display()
    {
        cout<<"Name -> "<<name<<endl;
        cout<<"Address -> "<<address<<endl;
        cout<<"Mobile number -> "<<"+977"<<mobile<<endl;
    }
};
int main()
{
    KTM k;
    MNR m;
    cout<<"------Kathmandu--------"<<endl;
    k.get_data();
    k.display();
    cout<<"----------MNR---------"<<endl;
    m.get_data();
    m.display();
    return 0;
}
