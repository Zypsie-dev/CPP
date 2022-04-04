#include<iostream>
using namespace std;
class complex
{
    public:
        int real,img;
    public:
        complex(int a,int b){
            real=a;
            img=b;
        }
        void operator -(complex d)
        {
            real=real-d.real;
            img=img-d.img;
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};
int main()
{
    complex d1(2,50),d2(1,20);
    d1-d2;
    return 0;
}