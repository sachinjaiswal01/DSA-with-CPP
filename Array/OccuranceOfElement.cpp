#include<iostream>
using namespace std;


void Occurance(int arr[],int size){
    int count=0;
    int elementCount=3;
    for(int i=0;i<size;i++){
        if(arr[i]==elementCount){
            count++;
        }
    }
    cout<<"the element "<<elementCount<<" appears "<<count<<" times"<<endl;
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
}
int main(){
    int arr[]={1,2,3,4,3};
    Occurance(arr,5);
    printArray(arr,5);


}