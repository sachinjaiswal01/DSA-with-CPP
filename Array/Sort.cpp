#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[],int size){
int step = 0;
int count=0;
for (int i = 0; i < size -1; i++) {
    cout << "step " << step++ << endl;
    printArray(arr, size);
    cout << endl;
    
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
        if (arr[j] <= arr[minIndex]) {
            minIndex = j;
        }
    }
    
    if (minIndex != i) {
        swap(arr[i], arr[minIndex]);
    }
}
}

int main(){
    // int arr[8]={4,3,2,7,8,2,3,1};
    int brr[6]={1,2,3,1,2,3};
    // printArray(arr,8);
    cout<<endl;
    printArray(brr,6);
    cout<<endl;
    // sort(arr,8);
    sort(brr,6);
    

    return 0;
}