#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=5,y=10;
    swap(&x,&y);
    cout<<"After execution: "<<endl;
    cout<<"x = "<<x<<endl<<"y = "<<y;
}