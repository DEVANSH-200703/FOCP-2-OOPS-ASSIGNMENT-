#include<iostream>
using namespace std;
class Rectangle{
private:
    double length;
    double breadth;
public:
Rectangle(double length,double breadth){
    this->length=length;
    this->breadth=breadth;
}
void displayInfo(){
    cout<<" Length of Rectangle :"<<length<<endl;
     cout<<" breadth of Rectangle :"<<breadth<<endl;
     cout<<"Area of Rectangle : "<<length*breadth<<endl;

}
~Rectangle(){
    cout<<"------Object Destroyed-------"<<endl;
}

};
int main(){
Rectangle r1(5,3);
r1.displayInfo();
    return 0;
}
