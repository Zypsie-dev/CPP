//Create class polygon based on this class, derive two base classes Rectangle and Triangle to calculate 
//area with necessary data members and member function. (note: area of rectangle=L*b and area of 
//triangle= (l*b/2)).
#include<iostream>
using namespace std;
class polygon{
    public:
    float length, breadth;
    void input()        //get data from user
    {
        cin>>length>>breadth;
    }
};
class rectangle:public polygon{
    public:
    void area(){
        cout<<"Rectangle Area -> "<<(length*breadth)<<endl; //calculating area of rectangle
    }    
};
class traingle:public polygon{
    public:
    void area(){
        cout<<"Traingle Area -> "<<(length*breadth)/2<<endl;      //calculates and displays area of traingle
    }
};
int main()
{
    rectangle r1;
    traingle t1;
    cout<<"------------------- To calculate reactangle area------------------"<<endl;
    r1.input();
    r1.area();
    cout<<"------------------- To calculate traingle area------------------"<<endl;
    t1.input();
    t1.area();
    return 0;
}
