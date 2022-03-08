#include <iostream>
using namespace std;
float calculateArea(float &l, float &b)
{
    return (l*b);
}
int main()
{
    float l,b;
    cout<<"Enter length and breadth = ";
    cin>>l>>b;
    cout<<"Area = "<<calculateArea(l,b);
}