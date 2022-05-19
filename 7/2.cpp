//Write a program to find the minimum of two numbers  using function template.
#include<iostream>
using namespace std;
template <class T>
void MIN(T a,T b)
{
    if(a>b)
        cout<<a<<" is minimum."<<endl;
    else if(b>a)
        cout<<b<<" is minimum."<<endl;
    else
        cout<<"Both are equal"<<endl;
}
int main()
{
    int x,y;
    float a,b;
    cin>>x>>y;
    cin>>a>>b;
    MIN(x,y);
    MIN(a,b);
    return 0;
}