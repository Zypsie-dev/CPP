#include <iostream>
using namespace std;
int sumNatural(int &num)
{
    int sum=0,i;
    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Sum of natural no upto "<<num<<" is "<<sumNatural(num);
}