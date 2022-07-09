#include<iostream>
using namespace std;
int main(){
    string nameOfUser;
    cout<<"Enter the name of the user:";
    getline(cin,nameOfUser);
    cout<<"\"Hello, "<<nameOfUser<<"\"";
    return 0;
}