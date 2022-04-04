#include<iostream>
using namespace std;
class circle
{
    private:
        float rad,Area;
    public:
        void getData();
        float calArea();
        void displayData();
}c1,c2,c3;
int main()
{
    c1.getData();
    c2.getData();
    c3.getData();
    return 0;
}
void circle::getData(){
    cin>>rad;
    displayData();
}
float circle::calArea(){
    return (3.14*rad*rad);
}
void circle::displayData()
{
    Area=calArea();
    cout<<"Area = "<<Area<<endl;
}