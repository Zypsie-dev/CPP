//Create a  base class called shape. Use this class to store two double type values that could be used to compute 
//the area of figures. Derive two specific classes called triangle and rectangle from the base shape. 
//Add to the base class, a member function get_data( ) to initialize base class data members and another 
//member function display_area( ) to compute and display the area of figure. Make display_area( ) as a 
//virtual function and redefine this function in the derived classes to suit their requirements.
#include<iostream>
using namespace std;
class shape{
protected:
double length,breadth;
public:
void get_data()
{
      cin>>length>>breadth;
}  
virtual void display_area()
{
    cout<<"Area -> "<<(length+breadth);
}
};
class rectangle:public shape{
public:
void display_area(){
    cout<<"Area of rectangle -> "<<length*breadth<<endl;
}
};
class traingle:public shape{
public:
void display_area(){
    cout<<"Area of traingle -> "<<(length*breadth)/2<<endl;
}
};
int main()
{
    traingle t;
    rectangle rec;
    t.get_data();
    rec.get_data();
    t.display_area();
    rec.display_area();
    return 0;
}