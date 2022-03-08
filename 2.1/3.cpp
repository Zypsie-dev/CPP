#include <iostream>
using namespace std;
int main()
{
    int i,wt[20],ht[20],n,count=0;
    cout<<"Enter number of boys: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Data no. "<<i+1<<endl;
        cout<<"Enter weight and height: ";
        cin>>wt[i]>>ht[i];
        if(wt[i]<50 && ht[i]>170)
        {
            count++;
        }
    }
    if(count!=0)
    {
        cout<<"There are "<<count<<" boys who satisfy the given criteria.";
    }
}