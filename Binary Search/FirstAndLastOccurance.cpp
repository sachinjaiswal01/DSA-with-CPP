#include<iostream>
using namespace std;


int firtsOccurance(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOccurance(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[5]={1,2,3,3,5};

    cout<<"first occurance of 3 at index "<<firtsOccurance(arr,5,3)<<endl;
    cout<<"last occurance of 3 at index "<<lastOccurance(arr,5,3);
    
}