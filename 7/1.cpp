//Write a program to find the maximum of two numbers  using function template.
#include<iostream>
using namespace std;
template <class T>
void MAX(T a,T b)
{
    if(a>b)
        cout<<a<<" is maximum."<<endl;
    else if(b>a)
        cout<<b<<" is maximum."<<endl;
    else
        cout<<"Both are equal"<<endl;
}
int main()
{
    int x,y;
    float a,b;
    cin>>x>>y;
    cin>>a>>b;
    MAX(x,y);
    MAX(a,b);
    return 0;
}