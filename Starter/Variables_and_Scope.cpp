#include<iostream>
using namespace std;
int glo=6;  //globle variable.
void sum(){
    // int a;
    cout <<glo;
}
int main(){
    int a=5,b=1;
    cout<<"value of a is:"<<a<<"\nthe vlue of b is:"<<b;
    float c=4;
    cout<<"\n the vlaue of c is:"<<c;
    char d='A';
    cout<<"\n the vlaue of d is:"<<d;
    bool e=true;
    cout<<"\n the vlaue of e is:"<<e;
    cout<<"\n";
    int glo=9;  //local variable 
    sum();
    cout<<glo;

}