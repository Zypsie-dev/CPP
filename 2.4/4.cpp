#include <iostream>
using namespace std;
int sum(int *p)
{
    int sum=0,i;
    for(i=0;i<5;i++)
    {
        sum+=*p;
        p++;
    }
    return sum;
}
int main()
{
    int arr[5]={5,4,6,7,8};
    int *ptr;
    ptr=&arr[0];
    cout<<"Sum of array: "<<sum(ptr)<<endl;
    cout<<"Average: "<<float(sum(ptr))/5<<endl;
}