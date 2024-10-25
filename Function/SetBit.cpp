#include<iostream>
#include<math.h>
using namespace std;

int SetBit(int n){
    int count=0;
   while(n!=0){
    if(n&1){
        count++;
    }
    n=n>>1;
   }
   return count;
}
int main(){
    int a,b;
    cout<<"Ente value of a and b:";
    cin>>a>>b;
    int ans=SetBit(a)+SetBit(b);
    cout<<ans;
}