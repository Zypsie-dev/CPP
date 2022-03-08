#include <iostream>
using namespace std;
int main()
{
    int num,temp,rev=0;
    cout<<"Enter number:- ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    cout<<"Reverse of "<<num<<" is "<<rev;
}