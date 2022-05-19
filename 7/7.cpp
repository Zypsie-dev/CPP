//Write a program to read different value of a variable such as o, 1,  -1, etc . 
//Throw and catch the different types of exceptions depend on the value of a 
//variable such as if 0 then throw integer exception, if 1 throw character exception and so on 
 //( note: use multiple catch blocks).
#include<iostream>
using namespace std;
void check(int a)
{
    float f;
    if(a==0)
    {
        throw('a');
    }
    else if(a==1)
    {
        throw(5);
    }
    else
    {
        throw(f);
    }
}
int main()
{
    int num;
    cin>>num;
    try{
    if(num<-1||num>1)
    {
        cout<<"Error input!!!"<<endl;
    }
    else{
        check(num);
    }
    }
    catch(int num)
    {
        cout<<"Integer exception!!!"<<endl;
    }
    catch(float num)
    {
        cout<<"Float exception!!!"<<endl;
    }
    catch(char num)
    {
        cout<<"Character exception!!!"<<endl;
    }
    return 0;
}