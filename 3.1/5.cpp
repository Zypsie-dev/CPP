#include<iostream>
using namespace std;
class Item{
    private:
    int num, cost;
    public:
    void getData();
    void putData();
}i1,i2;
int main()
{
    i1.getData();
    i2.getData();
    i1.putData();
    i2.putData();
    return 0;
}
inline void Item::getData()
{
    cin>>num>>cost;
}
inline void Item::putData()
{
    cout<<"Number: "<<num<<endl;
    cout<<"Cost: "<<cost<<endl;
}