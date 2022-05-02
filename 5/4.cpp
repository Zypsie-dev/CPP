//Write a to illustrate the use of constructors in multiple inheritance

#include<iostream>
using namespace std;

class A
{
public:
  A()  { cout << "A's constructor called" << endl; }   
};
  
class B
{
public:
  B()  { cout << "B's constructor called" << endl; }    
};
  
class C: public B, public A  // here B's constructor is called first the A's and at last C's
{
public:
  C()  { cout << "C's constructor called" << endl; }
};
  
int main()
{
    C c;
    return 0;
}