//Write a program to read eid, name and salary of 10 employee form keyboard and
// write them into a file ‘employee.doc’.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void copy(char name[],fstream file)
{
    int i=0;
    while(!name[i])
    {
        file.put(name[i]);
    }
        file.put('\n');
}
void copy(double name,fstream file)
{
        file.put(name);
        file.put('\n');
}
int main()
{
    char name[25];
    double eid,salary;
    for (int i = 0; i < 10; i++)
    {
    cout<<"Enter name,eid,salary:-"<<endl;
    cin>>name>>eid>>salary;
    fstream file("employee.doc",ios::out);
    file<<name<<endl;
    file<<eid<<endl;
    file<<salary<<endl;
    }
    
    cout<<"Copied succesfully...";
    return 0;
}