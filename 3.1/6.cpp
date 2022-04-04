#include<iostream>
using namespace std;
class Item{
    private:
    int item, cost, code;
    char name[20];
    public:
    void getData();
    void putData();
}i1,i2,i3;
int main()
{
    i1.getData();
    i2.getData();
    i3.getData();
    i1.putData();
    i2.putData();
    i3.putData();
    return 0;
}
inline void Item::getData()
{
    cin>>item>>name>>cost>>code;
}
inline void Item::putData()
{
    cout<<"Item: "<<item<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Cost: "<<cost<<endl;
    cout<<"Code: "<<code<<endl;
    cout<<endl;
}