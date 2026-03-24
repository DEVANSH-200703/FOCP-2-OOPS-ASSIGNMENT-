#include<iostream>
#include<string>
using namespace std;
class Course{
private:
string Course_name;
string Instructor_name;
float Course_duration;
public:
Course(string Course_name,string Instructor_name,float Course_duration){
this->Course_name=Course_name;
this->Instructor_name=Instructor_name;
this->Course_duration=Course_duration;
}
void displayInfo(){
cout<<"COURSE NAME : "<<Course_name<<endl;
cout<<"INSTRUCTOR NAME : "<<Instructor_name<<endl;
cout<<"COURSE DURATION : "<<Course_duration<<"WEEKS"<<endl;
}
~Course(){
cout<<"------OBJECT DELETED------"<<endl;
}
};
int main(){
Course c1("NDA","ARPIT CHAUDHARY",7);
c1.displayInfo();
Course c2("JEE","SACHIN JAKHAR",21);
c2.displayInfo();
    return 0;
}
