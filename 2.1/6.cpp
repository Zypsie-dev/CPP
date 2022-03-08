#include <iostream>
using namespace std;
int main()
{
    int num,temp,count=0;
    cout<<"Enter number:- ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    cout<<"Entered number "<<num<<" has "<<count<<" number of digit.";
}