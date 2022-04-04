#include<iostream>
using namespace std;
class complex
{
    public:
        int num;
        complex(int a){
            num=a;
        }
        void operator *(complex d)
        {
            num=num*d.num;
            cout<<num<<endl;
        }
};
int main()
{
    complex d1(20),d2(5);
    d1*d2;
    return 0;
}