#include <iostream>
using namespace std;
int min(int &num1, int &num2,int &num3)
{
    if (num1<num2)
    {
        if (num1<num3)
            return num1;
        else if(num3<num2)
            return num3;
        else
            return num2;
    }
    else
    {
        if(num2<num3)
            return num2;
        else if (num3<num1)
            return num3;
        else
            return 0;
    }
}
int min(int &num1, int &num2)
{
    if (num1<num2)
        return num1;
    else if (num2<num1)
        return num2;
    else
        return 0;
}
int main()
{
    int n1,n2,n3;
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;
    if(min(n1,n2,n3)==0)
    {
        cout<<"All are equal.";
    }
    else
        {
        if(min(n1,n2)==0)
            cout<<"First two are equal."<<endl;
        if (min(n2,n3)==0)
            cout<<"Last two are equal."<<endl;
        cout<<"Minimun: "<<min(n1,n2,n3);
        }
}
