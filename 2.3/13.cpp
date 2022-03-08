#include <iostream>
using namespace std;
const float PI=3.14;
inline float area(float &rad)
{
    return(PI*rad*rad);
}
int main ()
{
    float rad;
    cout<<"Radius of circle: ";
    cin>>rad;
    cout<<"Area = "<<area(rad);
}