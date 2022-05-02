//Write a program to perform basic mathematical (+, -, / , %) operation using the concept of Hierarchical 
//inheritance
#include<iostream>
using namespace std;
class parent{
    protected:
    float a,b;
    public:
    void input(){
        cin>>a>>b;
    }
};
class add:public parent{
    public:
    void addition(){
        cout<<"-------------Addition------------"<<endl;
        input();    //inputs a and b for add
        cout<<"Result -> "<<a+b<<endl;
    }
};
class sub:public parent{
    public:
    void subtraction(){
        cout<<"-------------subtraction------------"<<endl;
        input();    //inputs a and b for sub
        cout<<"Result -> "<<a-b<<endl;
    }
};
class mul:public parent{
    public:
    void multipication(){
        cout<<"-------------multiplication------------"<<endl;
        input();    //inputs a and b for mul
        cout<<"Result -> "<<a*b<<endl;
    }
};
class divi:public parent{
    public:
    void division(){
        cout<<"---------------division--------------"<<endl;
        input();    //inputs a and b for div
        cout<<"Result -> "<<a/b<<endl;
    }
};
int main()
{
    //initializing objects
    add a;
    sub s;
    mul m;
    divi d;

    //calling all the datamembers
    a.addition();
    s.subtraction();
    m.multipication();
    d.division();

    return 0;
}
