//Write a C++ program to illustrate the opening, writing and reading  and closing of  file.
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class record{
    string name,address;
    int salary;
    public:
    void readdata()
    {
        cout<<"Name -> ";
        cin>>name;
        cout<<"Address -> ";
        cin>>address;
        cout<<"Salary -> ";
        cin>>salary;
    }
    void showdata()
    {
        cout<<"Name -> "<<name<<endl;
        cout<<"Address -> "<<address<<endl;
        cout<<"Salary -> "<<salary<<endl;
    }
};
void writefile()
{
    record rec;
    ofstream ofile("record.dat",ios::binary|ios::app);
    rec.readdata();
    ofile.write((char*)&rec,sizeof(rec));
}
void readfile()
{
    record rec;
    ifstream file("record.dat",ios::binary);
    while(!file.eof())
    {
       if(file.read((char*)&rec,sizeof(rec)))
        {
            rec.showdata();
        }
    }
}
int main()
{
    int choice;
    cout<<"-------Employee records--------"<<endl;
    cout<<"1. Write data."<<endl;
    cout<<"2. Read data"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        writefile();
        break;
    case 2:
        readfile();
        break;
    default:
        cout<<"Wrong input!!!!"<<endl;
        break;
    }
    return 0;
}