#include<iostream>
using namespace std;
class Length{
    public:
    void add();
    private:
    int Hours[2],minutes[2];
}len;
int main()
{
    len.add();
    return 0;
}
void Length::add()
{
    cout<<"Enter in Hours minutes Format."<<endl;
    cin>>Hours[0]>>minutes[0];
    cin>>Hours[1]>>minutes[1];
    cout<<Hours[0]+Hours[1]<<"Hrs ";
    cout<<minutes[0]+minutes[1]<<"min "<<endl;
}