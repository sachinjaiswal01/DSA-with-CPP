#include<iostream>
using namespace std;
int Arithimatic(int n){
    int ans =(3*n+7);
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number to get nth number:";
    cin>>n;
    cout<<Arithimatic(n);
}