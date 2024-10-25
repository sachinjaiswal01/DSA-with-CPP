#include<iostream>
#include<array>   //for STL
using namespace std;

int main(){

array<int ,5> arr ={1,2,3,4,5};

int size = arr.size(); // for calculate size
cout<<"Element at index 2: "<<arr.at(2)<<endl;       // 3
cout<<"Array is empty or not "<<arr.empty()<<endl;   // 0 -> false
cout<<"First element of array "<<arr.front()<<endl;  // 1
cout<<"last element of array "<<arr.back();          // 5

}