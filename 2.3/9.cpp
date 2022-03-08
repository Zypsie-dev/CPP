#include <iostream>
using namespace std;
int factorial(int n)
{
    int ans=1,i; 
    for(i=1;i<=n;i++)
    {
       ans*=i; 
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    num=factorial(num);
    cout<<"Factorial = "<<num;
}