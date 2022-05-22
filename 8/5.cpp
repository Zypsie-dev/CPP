
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
    fstream ofile("record2.dat",ios::binary|ios::app);
    rec.readdata();
    ofile.write((char*)&rec,sizeof(rec));
}
void readfile()
{
    int n;
    record rec;
    ifstream file("record.dat",ios::binary);
    cout<<"Enter record number -> ";
    cin>>n;
    file.seekg((n-1)*sizeof(rec));
    file.read((char*)&rec,sizeof(rec));
    rec.showdata();
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