#include<iostream>
using namespace std;
int main(){
    // int a=9;
    // if(a==9){
    //     cout<<"NINEY"<<endl;
    // }
    // if(a>9){
    //     cout<<"+ve";
    // }
    // else{
    //     cout<<"-ve";
    // }

    // int a=2;
    // int b=a+1;
    // if((a=3)==b){
    //     cout<<a;
    // }
    // else{
    //     cout<<a+1;
    // }


    // int a=24;
    // if(a>20){
    //     cout<<"Love";
    // }
    // else if(a==24){
    //     cout<<"Lovely";
    // }
    // else{
    //     cout<<"Babbar";
    // }
    // cout<<a;


    char ch;
    cout<<"enter the value of ch:"<<ch<<endl;
    cin>>ch;
    if(ch>='a'&& ch<='z'){
       cout<<"this is lowercasw." ;
    }
    else if(ch>='A'&& ch<='Z'){
       cout<<"this is Uppercasw." ;
    }
    else if(ch>='0'&& ch<='9'){
       cout<<"this is numric." ;
    }
    else{
        cout<<"Default";
    }
}