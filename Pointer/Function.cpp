#include <bits/stdc++.h>
using namespace std;

void printValue(int *p){
    // *p = *p+1;  
    cout<<*p<<endl; //6
}

// int get(int arr[],int n){
//     // cout<<"just checking size of the array"<<endl;
//     cout<<sizeof(arr);  //this will return sizeod int *arr size and will be same for int arr[].

// }
int main(){
    int val = 5;
    int *p = &val;
    // printValue(p);
    int arr[5] = {1,2,3,4,5};
    // get(arr,5);
    return 0;

}