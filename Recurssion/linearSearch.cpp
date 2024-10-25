#include<iostream>
using namespace std;

// bool linearSearch(int arr[] ,int key ,int size){
//     if(size == 0){
//         return false;
//     }
//     if(arr[0] == key){
//         return true;
//     }
//     else{
//         return linearSearch(arr+1 ,key,size-1);
//     }
// }

// 2nd method

int linearSearch(int arr[], int size ,int key ,int index = 0){
    if(index == size){
        return -1;
    }
    if(key == arr[index]){
        return index;
    }
    return linearSearch(arr,size,key ,index+1);
}
int main(){
    int arr[] = {1,2,3,4,6};
    int key;
    int size = 5;
    cout<<"enter your key-> ";
    cin>>key;

    int result = linearSearch(arr,size,key);
    // bool ans = linearSearch(arr,key,size);
    if(result != -1){
        cout<<"present at "<<result;
    }
    else{
        cout<<"absent";
    }

}