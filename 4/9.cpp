#include<iostream>
using namespace std;
class complex
{
    public:
        float num;
        complex(int a){
            num=a;
        }
        void operator /(complex d)
        {
            num=num/d.num;
            cout<<num<<endl;
        }
};
int main()
{
    complex d1(23),d2(5);
    d1/d2;
    return 0;
}