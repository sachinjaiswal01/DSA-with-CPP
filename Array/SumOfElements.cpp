#include<iostream>
using namespace std;

int Sum(int arr[],int n){
    int Sum =0 ;
    for(int i=0;i<5;i++){
    Sum=Sum+arr[i];
    }
    return Sum;
}

int main(){
    int arr[5]={1,2,3,4,5};
    
    int result=Sum(arr,5);
    cout<<endl<<"Sum of array element is:"<<result<<endl<<endl;
}