#include<iostream>
using namespace std;

void update(int arr[],int n){

    //Updating the value at 1st index.

    arr[0]=100;

    cout<<"print the array in update function."<<endl;

    //printing the array.

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"Going back to the main function."<<endl;
}

int main(){
    int arr[3]={3,2,7};

    update(arr,3);

    cout<<"printing array in the main function."<<endl;

    //printing the array.

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}
