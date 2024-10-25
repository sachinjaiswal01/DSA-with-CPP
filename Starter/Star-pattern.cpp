#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter value of n:";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}