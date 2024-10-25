#include<iostream>
using namespace std;
#include <limits.h>

//INT_MIN=2^(-31)
//INT_MAX=[(2^31)-1]

//For maximume of array.

int getMax(int num[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){

        //It can also be done by predifine function max
        // maxi=max(maxi,num[i]);

        if(num[i]>maxi){
            maxi=num[i];
        }
    }
        return maxi;
}

//For minimume of array.

int getMin(int num[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        
    //It can also be done by predifine function min
    // mini=min(mini,num[i]);

        if(num[i]<mini){
            mini=num[i];
        }
    }
        return mini;
}

int main(){
    int size;

    //Taking size of array bu user.
    cout<<"Enter the size of the array:";
    cin>>size;

    int num[100];

    //Creating array.

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    getMax(num,size);
    cout<<"Maximume of array is:"<<getMax(num,size)<<endl;

    getMin(num,size);
    cout<<"Manimume of array is:"<<getMin(num,size);

}