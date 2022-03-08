#include <iostream>
using namespace std;
int main(){
    int num,sum=0,i;
    cout<<"Enter 5 numbers: ";
    for(i=0;i<5;i++)
    {
        cin>>num;
        if(num<0)
        {
            break;
        }
        sum+=num;
    }
    cout<<"Sum = "<<sum;
}