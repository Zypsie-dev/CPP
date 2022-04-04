#include<iostream>
using namespace std;
class student{
    private:
        int rollno,marks;
        char name[50];
    public:
        void getData()
        {
            cin>>rollno>>marks>>name;
        }
        void showData()
        {
            if(marks>70)
            {
                cout<<"Name: "<<name<<endl;
                cout<<"Rollno: "<<rollno<<endl;
                cout<<"Marks: "<<marks<<endl;
                cout<<endl;
            }
        }
}s[5];
int main()
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        s[i].getData();
    }
    for ( i = 0; i < 5; i++)
    {
        s[i].showData();
    }
    return 0;
}