#include<iostream>
#define PI 3.14
using namespace std;
int main(){
    double area,radius;
    cout<<"Enter the radius of the circle:"; 
    cin>>radius; 
    area = PI*radius*radius;
    cout<<"Area of circle is "<<area<<" having the radius "<<radius;
    return 0;
}