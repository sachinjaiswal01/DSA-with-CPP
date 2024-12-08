#include<iostream>

using namespace std;

int* prepChai(int cups){
    int* orders = new int[cups];  // new leywprd assign dynamic memory
    for(int i = 0; i<cups;i++){
        orders[i] = (i+1) * 10;
    }
    return orders;
}

int main(){
    int cups = 5;
    int* chai = prepChai(cups);

    for(int i =0;i<cups;i++){
        cout<<" Cups: "<<i+1<<" has "<<chai[i]<<" ml\n";
    }
    delete[] chai; //free allocated memeory.
    return 0;
}