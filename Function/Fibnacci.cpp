#include<iostream>
using namespace std;
int fib(int n){

}
int Fibnacci(int n){
    if(n<=0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
    int ans=Fibnacci(n-1)+Fibnacci(n-2);
    return ans;
    }
}
int main(){
    int n;
    cout<<"Enter Number[index] to know the value :";
    cin>>n;
    cout<<Fibnacci(n);

}