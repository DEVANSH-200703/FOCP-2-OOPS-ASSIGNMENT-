#include<iostream>
#include<string>
using namespace std;
class Car{
private:
    string brand;
    float price;
public:
Car(string brand,float price){
    this->brand=brand;
    this->price=price;
}
void displayInfo(){
    cout<<" BRAND : "<<brand<<endl;
    cout<<" PRICE : "<<price<<" Crore"<<endl;
}
~Car(){
    cout<<"OBJECT DESTROYED"<<endl;
}

};
int main(){
Car c1("MERCEDES",2);
c1.displayInfo();
Car c2("BMW",3.5);
c2.displayInfo();

    return 0;
}
