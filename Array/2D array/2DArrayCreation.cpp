#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the row number :";
    cin>>row;
    cout<<"Enter the colounm number :";
    cin>>col;
    
    // Creating 2-D array.
    int ** arr = new int *[row];
    for(int i=0; i < row; i++ ){
        arr[i] = new int[col]; //har row me -> colunms
    }
    //Taking input  for the 2-D array.
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2-D matrix is:"<<endl;
    // Printing the 2-D array.
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i < row; i++ ){
        delete [] arr[i];
    }

    delete [] arr;
    return 0;
}
