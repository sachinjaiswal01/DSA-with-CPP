#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 int pivotIndex(int nums[],int n) {
    int s = 0;
    int e = n- 1;
 int mid = s + (e - s) / 2;

    while (s < e) {
        
        if(mid< n-1 && nums[mid]>nums[mid+1]){
            return mid+1;
        }
        if (nums[mid] >= nums[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}

int main()
{
    int A[3] = {2,1,-1};

    // Call the sum function and print the result
    cout << "pivotIndex: " << pivotIndex(A, 3) << endl;

    // printArray(A, 5);
}