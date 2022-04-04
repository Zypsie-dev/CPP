#include <iostream>
using namespace std;
class Rectangle
{
public:
    void setparameters();
    double getArea();
    double volume();
    void display();
private:
    double Length;
    double Width;
    double Height;
}rec[2];
int main()
{
    int i;
    for(i=0;i<2;i++)
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
    cin>>Length>>Width>>Height;
    }

double Rectangle::getArea(){
    return(Length*Width);
}
double Rectangle::volume(){
    return(Length*Width*Height);
}
void Rectangle::display(){
    cout<<"Area: "<<getArea()<<endl;
    cout<<"Volume: "<<volume()<<endl;
    cout<<endl;
}
