#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},sum=0,i;
    int *p;
    p=&arr[0];
    for(i=0;i<5;i++)
    {
        sum+=*p;
        p++;
    }
    cout<<"Sum of array: "<<sum<<endl;
    cout<<"Average: "<<float(sum)/5<<endl;
}
