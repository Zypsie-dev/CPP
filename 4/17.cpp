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
        void operator !=(Equal d)
        {
            if(t!=d.t)
                cout<<"Both are not equal."<<endl;
            else
                cout<<"Both are equal."<<endl;
        }
};
int main()
{
    float t;
    cin>>t;
    Equal r1(t);
    cin>>t;
    Equal r2(t);
    r1!=r2;
}