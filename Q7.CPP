
#include<iostream>
#include<string>
using namespace std;
class Table{
private:
string material;
float price=5000;
int legs=4;
public:
Table(){
material="WOOD";
price=5000;
legs=4;
}
Table(string material,float price){
this->material=material;
this->price=price;
this->legs=4;
}
Table(string material,float price,int legs){
this->material=material;
this->price=price;
this->legs=legs;
}
void displayInfo(string TABLETYPE){
    cout<<" MATERIAL : "<<material<<endl;
    cout<<" Price : "<<price<<"K"<<endl;
    cout<<" Legs : "<<legs<<endl;
}
~Table(){
    cout<<"-----OBJECT DESTROYED-----"<<endl;
}
};
int main(){
Table t1;
t1.displayInfo("DEFAULT TABLE");
Table t2("PLASTIC",27);
t2.displayInfo("MATERIAL & PRICE SPECIFIED");
Table t3("STEEL",15,12);
t3.displayInfo("CUSTOM MADE");
    return 0;
}
