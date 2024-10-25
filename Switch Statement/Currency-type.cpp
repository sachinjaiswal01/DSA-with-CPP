#include<iostream>
using namespace std;
int main(){
    int amount=1300;
    int note100=0,note50=0,note20=0,note1=0;

    switch(amount){
        case 0:note100=0;
            break;
        default:note100=amount/100;
            amount=amount%100;
            break;
    }
    
    switch(amount){
        case 0:note50=0;
            break;
        default:note50=amount/50;
            amount=amount%50;
            break;
    }
    
    switch(amount){
        case 0:note20=0;
            break;
        default:note20=amount/20;
            amount=amount%20;
            break;
    }
    
    switch(amount){
        case 0:note1=0;
            break;
        default:note1=amount/1;
            amount=amount%1;
            break;
    }
    cout<<"Number of 100rs notes:"<<note100<<endl;
    cout<<"Number of 50rs notes:"<<note50<<endl;
    cout<<"Number of 20rs notes:"<<note20<<endl;
    cout<<"Number of 1rs notes:"<<note1<<endl;

return 0;
}