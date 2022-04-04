#include<iostream>
using namespace std;
class Length{
    public:
    void add();
    private:
    int rs[2],paisa[2];
}len;
int main()
{
    len.add();
    return 0;
}
void Length::add()
{
    cout<<"Enter in Rupees Paisa Format."<<endl;
    cin>>rs[0]>>paisa[0];
    cin>>rs[1]>>paisa[1];
    cout<<rs[0]+rs[1]<<"RS ";
    cout<<paisa[0]+paisa[1]<<"Paisa"<<endl;
}