#include <iostream>
using namespace std;
int main() {
    int rollno,i,j;
    float marks[7],sum=0;
    char sub[7][40] = {"Science","Math","Nepali","Social","Computer","OPT math","Account"};
    cout<<"Enter your Roll no: ";
    cin>>rollno;
    for(i=0;i<7;i++)
    {
        cout<<sub[i]<<": ";
        cin>>marks[i];
        sum+=marks[i];
    }
    cout<<"Percentage = "<<sum/700*100;
    return 0;
}