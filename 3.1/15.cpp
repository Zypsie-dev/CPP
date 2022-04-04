#include<iostream>
using namespace std;
class square{
    private:
        float length;
    public:
        square(){
            length=0;
        }
        square(int l)
        {
            length=l;
        }
        square(square& s)
        {
            length=s.length;
        }
        void Area()
        {
            cout<<"Length: "<<length<<"\t";
            cout<<"Area: "<<(length*length)<<endl;
        }
};
int main()
{
    square s1;
    square s2(5);
    square s3(s2);
    square s4=s3;
    cout<<"s1 :"<<endl;
    s1.Area();
    cout<<"s2 :"<<endl;
    s2.Area();
    cout<<"s3 :"<<endl;
    s3.Area();
    cout<<"s4 :"<<endl;
    s4.Area();
    return 0;
}