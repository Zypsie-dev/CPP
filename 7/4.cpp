//Write function template for finding the minimum value contained in an array.
#include<iostream>
template<class T>
T MAX(T a[30],T count){
    T max=a[0];
    for (int i = 0; i < count; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
using namespace std;
int main()
{
    int arr[30],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum number is "<<MAX(arr,n)<<endl;
    return 0;
}