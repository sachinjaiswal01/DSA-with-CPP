#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rowSum(int arr[][4],int row ,int col){
    cout<<"Printing Sum : "<<endl;;
    for(int  row=0;row<3;row++){
        int sum = 0;
        for(int col=0;col<4;col++){
            sum=sum+arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int largestRowSum(int arr[][4],int row,int col){
    vector<int>ans;
    for(int  row=0;row<3;row++){
        int sum = 0;
        for(int col=0;col<4;col++){
            sum=sum+arr[row][col];
        }
        ans.push_back(sum);
    }
    sort(ans.begin(),ans.end());
    return ans.back();   //gives last element
}

int main(){
    int arr[3][4];
    cout<<"Enter the Elements "<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    rowSum(arr,3,4);

    cout<<"largest Row element after sum :"<<largestRowSum(arr,3,4);

}