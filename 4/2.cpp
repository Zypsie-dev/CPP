#include<iostream>
using namespace std;
class counter
{
    public:
        int count;
        counter()
        {
            count=10;
        }
        int operator ++(int)
        {
            return count++;
        }
};
int main()
{
    counter c1,c2;
    cout<<"Before "<<endl;
    cout<<"c1 = "<<c1.count<<endl;
    cout<<"c2 = "<<c2.count<<endl;
    int c = c1++ + 1;
    c2++;
    c2++;
    cout<<"After "<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"c1 = "<<c1.count<<endl;
    cout<<"c2 = "<<c2.count<<endl;
    return 0;
}