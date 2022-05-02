//Create a person class with attributes id and name and member function to set the member 
//variables and to display those variables. Then create class student with member variables 
//grade and addresses which inherits person class publically
#include<iostream>
#include<string.h>
using namespace std;
class person{
    int id;
    string name;
    public:
    void getData(){               //function to get user's input
        cin>>id>>name;          
    }
    void display(){               //function to display id and name
        cout<<"Id -> "<<id<<endl;
        cout<<"Name -> "<<name<<endl;
    }
};
class student:public person{
    float grade;
    string address;
    public:
    void input(){               //function to get input
        getData();              //calling inherited func of person
        cin>>grade>>address;
    }
    void output(){              //output all the values
        display();              //calling inherited func of person
        cout<<"Grade -> "<<grade<<endl;     
        cout<<"Address -> "<<address<<endl;
    }
};
int main()
{
    student s1;     //initializing object of student class
    s1.input();     //calling func to get input
    s1.output();    //calling func to output
    return 0;
}