#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the term to print the fibnacci series:";
    cin>>n;
   int a=0,b=1;
for(int i=0;i<=n;i++){
    int nextNumber=a+b;
    cout<<nextNumber<<endl;
    a=b;b=nextNumber;
}

return 0;
}