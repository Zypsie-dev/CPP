#include <iostream>
using namespace std;
int prime(int &num)
{
    int i,flag=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        return 1;
    else
        return 0;
}
int main()
{
    int num,check;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<prime(num);
}