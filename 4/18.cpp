#include<iostream>
using namespace std;
class Equal
{
    private:
        float t;
    public:
        Equal(float a){
            t = a;
        }
        void operator =(Equal d)
        {
            t=d.t;
            cout<<"value changed"<<endl;
            cout<<t;
        }
};
int main()
{
    float t;
    cin>>t;
    Equal e(t);
    cin>>t;
    Equal e2(t);
    e=e2;
}