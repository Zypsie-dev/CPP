#include<iostream>
using namespace std;
int larger(int *p,int*r)
{
    if(*p>*r)
        return(*p);
    else if(*r>*p)
        return(*r);
    else
        return(0);
}
int main()
{
    int num1=5,num2=20;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    if(larger(ptr1,ptr2)==0)
        cout<<"Both are equal.";
    else
        cout<<"Greater: "<<larger(ptr1,ptr2)<<endl;
    return 0;
}