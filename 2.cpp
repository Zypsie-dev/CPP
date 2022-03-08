#include <iostream>
using namespace std;
int main ()
{
    int num=60;
    int *p;
    p=&num;
    cout<<"Value : "<<*p<<endl;
    cout<<"Address : "<<p<<endl;
}