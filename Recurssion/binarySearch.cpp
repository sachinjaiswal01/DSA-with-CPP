#include<iostream>
using namespace std;

void print(int arr[],int s ,int e){

    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[] ,int s,int e,int key){
    cout<<endl;
    print(arr,s,e);
    //base case
    //not found
    if(s>e){
        return false;
    }
    // found
    int mid =s+ ( e-s) /2;
    cout<<"value of mid is "<<arr[mid]<<endl;
    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key ){
        return binarySearch(arr ,mid+1 ,e ,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}

int main(){
    int arr[] = {2,4,6,10,14};
    int size = 5;
    int s=0;
    int e =size-1;
    int key = 14;
    cout<<binarySearch(arr,s,e,key)<<endl;
}