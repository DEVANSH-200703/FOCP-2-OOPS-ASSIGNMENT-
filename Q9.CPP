#include<iostream>
#include<string>
using namespace std;
class ElectricityBill{
public:
float calculateBill(int units){
return  5*units;
}
float calculateBill(int units,float rate){
   return  (units*rate);
}
float calculateBill(int units,float rate,float fixed_charge){
    return (units*rate)+fixed_charge;
}
};
int main(){
    ElectricityBill eb;
    int  u1=10;
    int u2=8;
    float rpu1=19;
    int u3=7;
    float rpu=20,fc=5;
cout<<"-----CALCULATED BILL-----"<<endl;
cout << "UNITS CONSUMED ARE PROVIDED : " << eb.calculateBill(u1) << endl;
cout << "IF UNITS AND RATE PER UNIT ARE PROVIDED : " << eb.calculateBill(u2,rpu1) << endl;
cout << "IF UNITS , RATE PER UNIT AND FIXED CHARGE : " << eb.calculateBill(u3,rpu,fc) << endl;
    return 0;
}
