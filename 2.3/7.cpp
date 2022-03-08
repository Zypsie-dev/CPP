#include <iostream>
using namespace std;
int sumOfdigit (int &num)
{
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Sum of its digit is "<<sumOfdigit(num);
}