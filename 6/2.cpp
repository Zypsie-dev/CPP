//Extend the above program to display the area of circles. This requires addition of  a new derived class circle 
//that computes the area of a circle. Remember , for a circle we need only one value, its radius, but the 
//get_data(  ) function in the  base class requires two values to be passed. ( Hint: Make the second argument 
//of get_data( ) as default one with zero value.)
//Create a  base class called shape. Use this class to store two double type values that could be used to compute 
//the area of figures. Derive two specific classes called triangle and rectangle from the base shape. 
//Add to the base class, a member function get_data( ) to initialize base class data members and another 
//member function display_area( ) to compute and display the area of figure. Make display_area( ) as a 
//virtual function and redefine this function in the derived classes to suit their requirements.
#include<iostream>
#include<math.h>
using namespace std;
const float PI=3.14;
class shape{
protected:
double length,breadth;
public:
void get_data()
{
      cin>>length>>breadth;
}  
virtual void display_area()=0;
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
class Circle:public shape{
public:
void display_area(){
    cout<<"Area of Circle -> "<<2*PI*length*length<<endl;
}
};
int main()
{
    traingle t;
    rectangle rec;
    Circle c;
    t.get_data();
    rec.get_data();
    c.get_data();
    t.display_area();
    rec.display_area();
    c.display_area();
    return 0;
}