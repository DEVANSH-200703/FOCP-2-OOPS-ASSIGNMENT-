#include<iostream>
#include<string>
using namespace std;
class Employee{
private:
long long emp_id;
float salary;
public:
Employee(long long emp_id,float salary){
    this->emp_id=emp_id;
    this->salary=salary;
}
void displayInfo(){
    cout<<"emp_id : "<<"DD@"<<emp_id<<endl;
    cout<<"Salary : "<<salary<<"K"<<endl;
}
~Employee(){
cout<<"-----OBJECT DESTROYED-----"<<endl;
}
};
int main(){
Employee e1(1628,25);
e1.displayInfo();
    return 0;
}
