#include<iostream>
using namespace std;
class Figure{
private:
float side,length,breadth,height,radius;
public:
float Volume(float side){
return side*side*side;
}
float Volume(float length,float breadth, float height){
return length*breadth*height;
}
float Volume(float radius,float height){
return (3.14)*radius*radius*height;
}
};
int main(){
    Figure fig;
float s=5;
float l=3,b=6,h_rect=7;
float r=6,h_cyl=10;
cout << "VOLUME OF CUBE: " << fig.Volume(s) << endl;
    cout << "VOLUME OF CUBOID: " << fig.Volume(l, b, h_rect) << endl;
    cout << "VOLUME OF CYLINDER: " << fig.Volume(r, h_cyl) << endl;
    return 0;
}
