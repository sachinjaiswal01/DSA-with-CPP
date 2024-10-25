#include<iostream>
using namespace std;
int main(){
    float x=455;
    cout<<x<<endl;
    float & y=x;    //Refernce variable.
    cout <<y<<endl;

    float a=69.66;
    cout<<"Typecasted value of a is:"<<int(a)<<endl;
    cout<<"Typecasted value of a is:"<<(int)a<<endl;

    int b=45;
    cout<<"Typecasted value of b is:"<<(float)b<<endl;
    cout<<"Typecasted value of b is:"<<float(b)<<endl;


    return 0;
}