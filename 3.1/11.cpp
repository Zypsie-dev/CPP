#include<iostream>
using namespace std;
class Len{
    private:
    float feet,feet2;
    public:
    Len(float l,float l2)
    {
        feet=l;
        feet2=l2;
    }
    void add();
};
int main()
{
    float a=55.67,b=99.6;
    Len len(a,b);
    len.add();
    return 0;
}
void Len::add()
{
    float m=feet;
    feet=int(feet);
    float inches = 12*(m-feet);
    float m2=feet2;
    feet2=int(feet2);
    float inches2= 12*(m2-feet2);
    cout<<"Feet = "<<feet+feet2<<endl;
    cout<<"Inches = "<<inches+inches2<<endl;
}