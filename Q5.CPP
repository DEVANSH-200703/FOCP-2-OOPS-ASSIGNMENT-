#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
long long account_number;
float balance;
public:
BankAccount(long long account_number,float balance){
this->account_number=account_number;
this->balance = balance;
}
void displayInfo(){
    cout<<"       ACCOUNT DETAILS:-     "<<endl;
cout<<"ACCOUNT NUMBER : "<<"JAAT@"<<account_number <<endl;
cout<<"INITIAL BALANCE : "<<balance<<" Crore"<<endl;
}
~BankAccount(){
    cout<<"-----OPERATOR DESTROYED-----"<<endl;
}
};
int main(){
BankAccount a1(200703,12);
a1.displayInfo();
return 0;
}
