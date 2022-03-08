#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    char op;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter operator: ";
    cin>>op;
    switch (op){
    case '+':
    cout<<num1<<" + "<<num2<<" = ";
    cout<<num1+num2<<endl;
    break;
    case '-':
    cout<<num1<<" - "<<num2<<" = ";
    cout<<num1-num2<<endl;
    break;
    case '*':
    cout<<num1<<" * "<<num2<<" = ";
    cout<<num1*num2<<endl;
    break;
    case '/':
    cout<<num1<<" / "<<num2<<" = ";
    cout<<num1/num2<<endl;
    break;
    default:
    cout<<"Wrong operator!!!";
    break;
    }
}