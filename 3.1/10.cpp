#include<iostream>
using namespace std;
class complex{
    public:
    void add();
    private:
    int real[2],img[2];
}cmp;
int main()
{
    cmp.add();
    return 0;
}
void complex::add()
{
    cin>>real[0]>>img[0];
    cin>>real[1]>>img[1];
    cout<<real[0]+real[1]<<"+";
    cout<<img[0]+img[1]<<"i";
}