#include <iostream>
using namespace std;
const float PI = 3.14;
inline float area(float l)
{
    return(l*l*l);
}
inline float area(float l,float b, float h)
{
    return(l*b*h);
}
inline float area(float r, float h)
{
    return(PI*r*r*h);
}
int main()
{
    float l=10,b=15,h=20,r=14.5;
    cout<<"Area of cube : "<<area(l)<<endl;
    cout<<"Area of cylinder : "<<area(r,h)<<endl;
    cout<<"Area of rectangle : "<<area(l,b,h)<<endl;
}