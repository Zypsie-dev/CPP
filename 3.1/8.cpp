#include <iostream>
using namespace std;
class Rectangle
{
public:
    void setparameters();
    double getArea();
    double perimeter();
    void display();
private:
    double Length;
    double Width;
}rec[3];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        rec[i].setparameters();
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        rec[i].display();
    }
    return 0;
}

inline void Rectangle::setparameters(){
    cin>>Length>>Width;
    }

double Rectangle::getArea(){
    return(Length*Width);
}
double Rectangle::perimeter(){
    return(2*(Length+Width));
}
void Rectangle::display(){
    cout<<"Area: "<<getArea()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
    cout<<endl;
}
