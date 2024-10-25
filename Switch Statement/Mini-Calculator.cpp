#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    char operation;
    cout<<"Enter the operation you want to perform:";
    cin>>operation;
    switch(operation){
        case '+':cout<<"Result:"<<a+b;
        break;
        case '-':cout<<"Result"<<a-b;
        break;
        case '*':cout<<"Result:"<<a*b;
        break;
        case '/':cout<<"Result:"<<a/b;
        break;
        default:cout<<"invalid operation";
    }
}