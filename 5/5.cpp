//Write a to illustrate the use of constructors in multilevel inheritance
#include<iostream>
using namespace std;
class A{            //parent class
    public:
    A(){cout<<"A's constructor is called."<<endl; }
};
class B:public A{   //chlid class
    public:
    B(){cout<<"B's constructor is called."<<endl;}
};
class C:public B{   //grand child class
    public:
    C(){cout<<"C's constructor is called."<<endl;};
};
int main()
{
    C c1;  // first A is called then B and atlast C...
    return 0;
}