#include<iostream>
using namespace std;

void Swap(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={7,8,9,10,11};

    Swap(arr,6);
    Swap(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}


#include<iostream>
using namespace std;

void swap(int arr[],int n){
    for(int i=0;i<n;i+=2){    //for loop is used for traversing the array.
        if(i+1<n){            //i+1 is the next element and used to check that it will not overflow.
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={1,3,2,7,11,8};
    printArray(arr,6);
    swap(arr,6);
    printArray(arr,6);
    
}