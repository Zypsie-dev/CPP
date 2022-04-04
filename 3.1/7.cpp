#include<iostream>
using namespace std;
class Employee{
    private:
    int age, salary;
    char name[20];
    public:
    void getData();
    void putData();
}manager,foreman[3],workers[5];
int main()
{
    manager.getData();
    for(int i = 0; i<3;i++)
    {
        foreman[i].getData();
    }
    for(int i=0; i<5; i++)
    {
        workers[i].getData();
    }
    cout<<"     Manager"<<endl;
    manager.putData();
    cout<<"     Foreman"<<endl;
    for(int i = 0; i<3;i++)
    {
        foreman[i].putData();
    }
    cout<<"     Workers"<<endl;
    for(int i=0; i<5; i++)
    {
        workers[i].putData();
    }
    return 0;
}
inline void Employee::getData()
{
    cin>>name>>age>>salary;
}
inline void Employee::putData()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<endl;
}