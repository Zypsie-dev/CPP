#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After execution: "<<endl;
    cout<<"x = "<<a<<endl<<"y = "<<b;
}
int main()
{
    int x=5,y=10;
    swap(x,y);
}