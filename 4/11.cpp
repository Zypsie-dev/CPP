#include<iostream>
using namespace std;
class Length
{
    private:
        float Feet,Inch;
        float t;
    public:
        Length(float a,float b){
            Feet=a;
            Inch=b;
            t=Feet*12+Inch;
        }
        int operator >(Length d)
        {
            if(t<d.t)
                return 1;
            else
                return 0;
        }
        void display(){
            cout<<Feet<<"."<<Inch<<" is greater."<<endl;
        }
};
int main()
{
    float feet,inch;
    cin>>feet>>inch;
    Length r1(feet,inch);
    cin>>feet>>inch;
    Length r2(feet,inch);
    if(r1>r2)
        r1.display();
    else
        r2.display();
}