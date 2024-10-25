#include<iostream>
using namespace std;
bool isEven(int n){
    if(n&1){
        return 0;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter the number of n;"<<endl;
    cin>>n;
    if(isEven(n)){
        cout<<"Number "<<n<<" is even";
    }
    else{
        cout<<"Number "<<n<<" is odd";
    }
    
}