#include<iostream>
using namespace std;
int c=69;
int main(){
    int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"Sum is:"<<c<<endl;
    cout<<"The globle c is:"<<::c<<endl;   //::-->>scope resolution opertor to print globel varible in local variable.



    return 0;
}