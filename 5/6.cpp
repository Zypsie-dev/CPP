//Write a program to illustrate use of destructors in multiple inheritance

#include<iostream>
using namespace std;

class A
{
public:
  A()  { cout << "A's constructor called" << endl; }   
  ~A(){cout<<"A's Destructors called"<<endl; }
};
class B
{
public:
  B()  { cout << "B's constructor called" << endl; }    
  ~B(){ cout<<"B's Destructors called" << endl; }
};
  
class C: public B, public A  // here B's constructor is called first the A's and at last C's
{
public:
  C()  { cout << "C's constructor called" << endl; }
  ~C(){ cout<<"c's Destructors called" << endl; }
};
  
int main()
{
    C c;
    return 0;
}