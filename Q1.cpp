#include<iostream>
using namespace std;
class Student {
private:
string name;
float marks;
public:
Student(string n,float m){
    name=n;
    marks=m;
}
void displayDetails(){
cout<<" Name : "<<name<<endl;
cout<<" Marks : "<<marks<<"/100"<<endl;
}
};
int main(){
Student s1("DEVANSH DAHIYA",90);
s1.displayDetails();

    return 0;
}
