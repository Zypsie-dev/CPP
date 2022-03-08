#include <iostream>
using namespace std;
int greatest(int num1, int num2,int num3=5)
{
    if (num1>num2 && num1>num3)
        return num1;
    else if (num2>num1 && num2>num3)
        return num2;
    else if (num3>num2 && num3>num1)
        return num3;
    else
        return false;
}
int main()
{
    int n1,n2,n3;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    if(greatest(n1,n2)==false)
        cout<<"All are equal.";
    else
        cout<<"Greatest = "<<greatest(n1,n2);
}
