#include <iostream>
#include <string>
using namespace std;
class Laptop {
private:
    string brand;
    int ram;
    int price;
public:
    Laptop(string b) {
        brand = b;
        ram = 0;  
        price = 0;
    }
    Laptop(string b, int r) {
        brand = b;
        ram = r;
        price = 0;
    }
 Laptop(string b, int r, int p) {
        brand = b;
        ram =r;
        price =p;
    }

    void display() {
        cout << "Laptop Brand: " << brand << endl;
        cout << "RAM Size    : " << ram << " GB" << endl;
        cout << "Price       : Rs. " << price << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Laptop l1("HP");
    l1.display();
    Laptop l2("DELL",25);
    l2.display();
    Laptop l3("MacBook",200,300000);
    l3.display();
    return 0;
}
