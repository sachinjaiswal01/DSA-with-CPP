#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the n number:";
cin>>n;
for(int i=2;i<n-1;i++){
    if(n%i==0){
    cout<<n<<" is not a prime number.";
    break;
    
}
else
{
    cout<<n<<" is a prime number.";
    break;
}}
return 0;
}