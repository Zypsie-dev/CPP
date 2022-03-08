#include <iostream>
using namespace std;
float const PI=3.14;
float areaOfcircle(float &r)
{
    return (PI*r*r);
}
int main()
{
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area = "<<areaOfcircle(r);
    cout<<"Enter another radius: ";
    cin>>r;
    cout<<"Area = "<<areaOfcircle(r);
}