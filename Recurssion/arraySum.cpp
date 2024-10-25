#include<iostream>
using namespace std;


int arrSum(int arr[] ,int size){
    if(size == 0){  //base condition
        return 0;
    }
    if(size ==1 ){
        return arr[0];
    }
    return arr[size - 1]+ arrSum(arr ,size-1); // recusrsive function
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
int main(){
    // int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int size = 10 ;
    int arr[10];
    printArray(arr,size);
    cout<<arrSum(arr,size);
}