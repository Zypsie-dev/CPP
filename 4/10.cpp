#include<iostream>
using namespace std;
class Rupees
{
    private:
        float RS,PS;
        float t;
    public:
        Rupees(float a,float b){
            RS=a;
            PS=b;
            t=RS*100+PS;
        }
        int operator <(Rupees d)
        {
            if(t<d.t)
                return 1;
            else
                return 0;
        }
        void display(){
            cout<<RS<<"."<<PS<<" rs is less."<<endl;
        }
};
int main()
{
    float rs,ps;
    cin>>rs>>ps;
    Rupees r1(rs,ps);
    cin>>rs>>ps;
    Rupees r2(rs,ps);
    if(r1<r2)
        r1.display();
    else
        r2.display();
}