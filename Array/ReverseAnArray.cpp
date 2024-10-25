// #include <iostream>
// using namespace std;

// // void Reverse(int arr[], int n)
// // {
// //     int arr1[n];
// //     for (int i = 0, j = n - 1; i < n; i++, j--)
// //     {
// //         arr1[j] = arr[i];
// //     }
// //     cout << endl
// //          << "Reverse array is:";
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << " " << arr1[i];
// //     }
// //     cout << endl
// //          << endl;
// // }
// // int main()
// // {
// //     int arr[5] = {2, 7, 5, 9,10};

// //     Reverse(arr, 5);
// // }

// //Second methode to reverse an array.

// void reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }
// int main(){
    
//     int arr[6]={1,4,0,5,-2,15};
//     int brr[5]={2,6,3,9,4};

//     reverse(arr,6);
//     reverse(brr,5);
//     printArray(arr,6);
//     printArray(brr,5);

// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int a[],int n){
    int arr[n];
    for(int i=0,j=n-1;i<n;i++,j--){
        arr[j]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    reverse(a,n);

}