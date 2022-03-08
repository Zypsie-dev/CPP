#include <iostream>
using namespace std;
int reverse (int &num)
{
    int rev=0;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    return rev;
}
int main()
{
    int num=234;
    cout<<"Reverse of "<<num<<" is "<<reverse(num);
}