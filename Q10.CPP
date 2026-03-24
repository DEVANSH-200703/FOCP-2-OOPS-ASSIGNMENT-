#include<iostream>
#include<string>
using namespace std;
class Product{
private:
string product_name;
float price;
int quantity;
public:
Product(string product_name, float price , int quantity) {
      this-> product_name =product_name;
      this->  price = price;
     this->  quantity=quantity;
    }
float calculate(){
    return  (price*quantity);
}
void detailInfo(){
    cout<<"Product Name : "<<product_name<<endl;
    cout<<"Price : "<<"Rs."<<price<<endl;
    cout<<"Quantity : "<<quantity<<"Packets"<<endl;
    cout<<"TOTAL COST = "<<calculate()<<endl;
}

 ~Product(){
cout<<"-----PRODUCT IS REMOVED FROM THE MEMORY-----"<<endl;
    }
};
int main(){
    cout<<"-----CALCULATED BILL-----"<<endl;
Product p1("AMUL",50,4);
p1.detailInfo();
Product p2("CADBURY",10,15);
p2.detailInfo();
    return 0;
}
