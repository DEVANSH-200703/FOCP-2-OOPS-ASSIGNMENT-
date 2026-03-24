#include<iostream>
#include<string>
using namespace std;
class Book{
private:
    string book_title;
    float price;
public:
Book(string book_title,float price){
    this->book_title=book_title;
    this->price=price;
}
void displayInfo(){
    cout<<"BOOK TITLE : "<<book_title<<endl;
    cout<<"PRICE : "<<price<<" LAKHS"<<endl;
}
~Book(){
cout<<"-----OBJECT DESTROYED-----"<<endl;
}
};
int main(){
Book b1("INFINITY SAGA-I",2);
b1.displayInfo();
Book b2("INFINITY SAGA-II",3);
b2.displayInfo();
Book b3("INFINITY SAGA-III",4);
b3.displayInfo();
    return 0;
}
