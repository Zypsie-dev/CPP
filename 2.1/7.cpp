#include <iostream>
using namespace std;
int main()
{
    int num,temp,sum=0;
    cout<<"Enter number:- ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        sum+=temp%10;
        temp=temp/10;
    }
    cout<<"Sum of digits of "<<num<<" is "<<sum;
}