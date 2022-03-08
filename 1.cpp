#include<iostream>
using namespace std;
namespace A{
    int add(int a=5, int b=5)
    {
        return(a+b);
    }
}
namespace B{
    int add(int a=90, int b=5)
    {
        return(a+b);
    }
}
int main()
{
    cout<<"From first namespace: "<<A::add()<<endl;
    cout<<"From second namespace: "<<B::add()<<endl;
    return 0;
}