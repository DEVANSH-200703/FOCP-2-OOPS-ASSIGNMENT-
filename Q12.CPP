#include<iostream>
#include<string>
using namespace std;
class Mobile{
private:
string Brand;
float Price;
float Storage;
public:
Mobile(string Brand){
    this-> Brand=Brand;
    this-> Price=0;
    this->Storage=0;
}
Mobile(string Brand ,float Price){
   this-> Brand=Brand;
    this-> Price=Price;
    this->Storage=0;
}
Mobile(string Brand,float Price,float Storage){
    this-> Brand=Brand;
    this-> Price=Price;
    this->Storage=Storage;
}
void detailsInfo(){
cout<<"BRAND : "<<Brand<<endl;
cout<<"PRICE : "<<Price<<"K"<<endl;
cout<<"STORAGE : "<<Storage<<"GB"<<endl;
}
~Mobile(){
    cout<<"------OBJECT DELETED------"<<endl;
}
};
int main(){
Mobile m1("OPPO");
m1.detailsInfo();
Mobile m2("ONE PLUS",30);
m2.detailsInfo();
Mobile m3("IQOO",70,150);
m3.detailsInfo();
    return 0;
}
