//Write a program to read two numbers from the user then divide first number by second number only if second
//number is not zero. If second number is zero then throw divide by zero exception and handle it.
#include<iostream>
using namespace std;
float divide(float a, float b)
{
    return(a/b);
}
int main()
{
    float a,b;
    cin>>a>>b;
    try{
        if(b==0)
        {
            cout<<"Divident should not be zero."<<endl;
        }
        else{
            throw(a);
        }
    }
    catch(float a)
    {
        cout<<a<<" / "<<b<<" = "<<divide(a,b)<<endl;
    }
    return 0;
}