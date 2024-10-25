#include<iostream>
using namespace std;
int main(){
    int n,i,sum;
    cout<<"Enter the number of n:";
    cin>>n;

// Printing N natural number.

    // i=1;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i++;
    // }

// Sum of N natural number.

    // sum=0;
    // i=0;
    // while(i<=n){
    //     sum=sum+i;
    //     cout<<sum<<" ";
    //     i++;
    // }

// Sum of all even number

    // sum=0;
    // i=0;
    // while(i<=n){
    //     if(i%2==0){
    //         sum=sum+i;
    //         cout<<sum<<" ";
    //     }
    //     i++;
    // }

// Prime Number
    i=2;
    while(i<n){
        if(n%i==0){
            cout<<" not  prime for "<<i<<endl;
        }
        else{
            cout<<" prime for "<<i<<endl;
        }
        i=i+1;
    }
    return 0;
}