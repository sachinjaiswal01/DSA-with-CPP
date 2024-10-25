#include<iostream>
using namespace std;

void PrimeNumber(int n){
    for(int i=2;i<n;i++){
        if(n%1==0 && n%n==0 && n%i!=0){
            cout<<"Prime number";
            break;
        }
        else{
            cout<<"Not a prime number";
            break;
        }
    }
}

//Second methode.
//1->Prime
//0->Not prime

// bool Prime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//         return 0;
//         }
//     }
//     return 1;
// }
int main(){
    int n;
    cout<<"Enter a number to know whether it is prime or not:";
    cin>>n;
    PrimeNumber(n);
    // int result=Prime(n);
    // cout<<result;
return 0;
}