 #include <iostream>
using namespace std;
int main()
{
    int num,temp,sum=0,cube;
    cout<<"Enter number:- ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        cube=(temp%10)*(temp%10)*(temp%10);
        sum+=cube;
        temp=temp/10;
    }
    if(sum==num)
    {
        cout<<num<<" is Armstrong number.";
    }
    else
    {
        cout<<num<<" is not Armstrong number.";
    }
}