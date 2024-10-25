#include<iostream>
#include<math.h>
using namespace std;
int power(){
    int a,b;
    cout<<"Enter value of a and value of b:"<<endl;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    
    int answer=power();
    cout<<"power of base power is:"<<answer;

}