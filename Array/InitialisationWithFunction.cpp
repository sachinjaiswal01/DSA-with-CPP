#include<iostream>
using namespace std;
 int printArray(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" :PRINTING DONE";
    cout<<endl;
 }
 int main(){
    int first[15]={2,3,5,6,7,8};
    printArray(first,15);

    // cout<<endl;

    cout<<"Array name a:";
    int a[15];
    printArray(a,15);

    // cout<<endl;

    cout<<"Array name array:";
    int array[3]={3,7,11};
    printArray(array,3);

    // cout<<endl;

    cout<<"Array name third:";
    int third[15]={2,7};
    printArray(third,15);

    //Calculating size of array,but by this we can not calculate size of element by sizeod(), just like below we only gived 2 value but output in terminal will be 15.

    int thirdSize=sizeof(third)/sizeof(int);
    cout<<"Size if third is:"<<thirdSize;


    return 0;

 }