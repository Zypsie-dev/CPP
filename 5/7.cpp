//Write a program to illustrate use of destructors in multilevel inheritance
#include<iostream>
using namespace std;
class A{            //parent class
    public:
    A(){cout<<"A's constructor is called."<<endl; }
  ~A(){cout<<"A's Destructors called"<<endl; }
};
class B:public A{   //chlid class
    public:
    B(){cout<<"B's constructor is called."<<endl;}
  ~B(){cout<<"B's Destructors called"<<endl; }
};
class C:public B{   //grand child class
    public:
    C(){cout<<"C's constructor is called."<<endl;};
  ~C(){cout<<"C's Destructors called"<<endl; }

};
int main()
{
    C c1;  // first A is called then B and atlast C...
    return 0;
}