#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
    int i,sum=0;
    int *ptr;
    ptr=&arr[0][0];
    for ( i = 0; i < 12; i++)
    {
        sum+=*ptr;
        ptr++;   
    }
    cout<<"Sum of array: "<<sum<<endl;
    cout<<"Average: "<<float(sum)/12<<endl;
    return 0;
}