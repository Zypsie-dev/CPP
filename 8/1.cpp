//Write a program to illustrate the overloading of  stream operators.
#include<iostream>
#include<string.h>
using namespace std;
class employee{
    protected:
    string name,address;
    public:
    friend void operator >>(istream &obj,employee &e);
    friend void operator <<(ostream &obj,employee &e);
};
void operator >>(istream &obj,employee &e){
    obj>>e.name>>e.address;
}
void operator <<(ostream &obj,employee &e){
    obj<<"Name -> "<<e.name<<endl;
    obj<<"Address -> "<<e.address<<endl;
}
int main()
{
    employee emp;
    cin>>emp;
    cout<<emp;
    return 0;
}