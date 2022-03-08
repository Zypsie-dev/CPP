#include <iostream>
using namespace std;
inline float simpleInterest(float p, float r, float t)
{
    return((p*t*r)/100);
}
int main()
{
    float p,t,r;
    cout<<"Principle = ";
    cin>>p;
    cout<<"Time = ";
    cin>>t;
    cout<<"Rate = ";
    cin>>r;
    cout<<"Simple Interest: "<<simpleInterest(p,r,t);
}
