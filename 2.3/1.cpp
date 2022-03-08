#include <iostream>
using namespace std;
float multiply(float &a,int &b)
{
    return a*b;
}
int main()
{
    float a;
    int b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Multiply = "<<multiply(a,b);
}