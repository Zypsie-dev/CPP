#include<iostream>
using namespace std;
class Temp{
    private:
    float fah;
    public:
    void getdata();
    float convert();
}temp;
int main()
{
    temp.getdata();
    return 0;
}
void Temp::getdata(){
    cin>>fah;
    cout<<"Converted temp is: "<<convert();
}
float Temp::convert(){
    return (fah-32)/1.8;
}