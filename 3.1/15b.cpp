#include<iostream>
using namespace std;
class square{
    private:
        float length;
    public:
        square(square& s)
        {
            length=s.length;
        }
        void Area()
        {
            cout<<"Area: "<<(length*length)<<endl;
        }
};
int main()
{
    square s1(2);
    square s2(5);
    s1.Area();
    s2.Area();
    return 0;
}