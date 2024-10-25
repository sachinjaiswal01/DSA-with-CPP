#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int BinarySearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}

int main(){
    int key;
    int arr[7]={2,4,8,12,14,44,55};
    int brr[6]={1,3,5,7,9,10};

    printArray(arr,7);
    int oddIndex=BinarySearch(arr,7,14);
    cout<<"odd index is : "<<oddIndex<<endl;
    cout<<endl;

    printArray(brr,6);
    int evenIndex=BinarySearch(brr,6,3);

    cout<<"even index is : "<<evenIndex<<endl;
}