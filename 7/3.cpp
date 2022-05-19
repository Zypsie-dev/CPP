//Write a program to find the maximum of  two data members of a classes using the concept of a template.
#include<iostream>
using namespace std;
template<class T>
class A{
    T a,b;
    public:
    A(T x,T y){
        a=x;
        b=y;
    }
    void MAX()
    {
        if(a>b)
            cout<<a<<" is maximum."<<endl;
        else if(b>a)
            cout<<b<<" is maximum."<<endl;
        else
            cout<<"Both are equal"<<endl;
    }
};
int main()
{
    A<int> a1(5,10);
    A<float> a2(5.5,5.6);
    a1.MAX();
    a2.MAX();
    return 0;
}