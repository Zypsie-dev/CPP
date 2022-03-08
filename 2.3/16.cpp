#include <iostream>
using namespace std;
inline void display(int &a)
{
    cout<<"Integer = "<<a<<endl; 
}
inline void display(float &a)
{
    cout<<"Float = "<<a<<endl; 
}
inline void display(char &a)
{
    cout<<"Char "<<a<<endl; 
}
int main()
{
    int num;
    float dec;
    char a;
    cout<<"Enter integer: ";
    cin>>num;
    cout<<"Enter float: ";
    cin>>dec;
    cout<<"Enter char: ";
    cin>>a;
    display(num);
    display(dec);
    display(a);
}