#include<iostream>
using namespace std;
class great
{
    private:
    int num1,num2;
    public:
    void test(){
        cin>>num1>>num2;
        if(num1>num2)
            cout<<num1<<" is greater."<<endl;
        else
            cout<<num2<<" is greater."<<endl;
}
};
int main()
{
    great gre;
    gre.test();
    return 0;
}
 