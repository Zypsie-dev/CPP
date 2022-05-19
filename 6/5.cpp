//Write a program to find the average of the private data members 
//of two different classes using friend function.
#include<iostream>
using namespace std;
class B;
class A{
    float a;
    friend float avg(A&,B&);
    public:
    virtual void getdata(){
        cin>>a;
    }
};
class B{
    float b;
    friend float avg(A&,B&);
    public:
    virtual void getdata(){
        cin>>b;
    }
};
int main()
{
    A A1;
    B B1;
    A1.getdata();
    B1.getdata();
    cout<<"Average "<<avg(A1,B1);
    return 0;
}
float avg(A&obj1,B&obj2){
    return((obj1.a+obj2.b)/2);
}