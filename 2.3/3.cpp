#include <iostream>
using namespace std;
void readData(float &a,float &b)
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
}
float processData(float &a,float &b)
{
    return (a+b);
}
void displayData(float &sum)
{
    cout<<"Sum = "<<sum;
}
int main()
{
    float a,b,sum;
    readData(a,b);
    sum = processData(a,b);
    displayData(sum);
}