#include<iostream>
#include<vector>
using namespace std;
int main() {

//creation 
vector<int>v;
//capacity -> kitna element assign hai.
cout<<"Capacity of vector : "<<v.capacity()<<endl; //0

//insertion 
v.push_back(1);
cout<<"Capacity of vector : "<<v.capacity()<<endl; //1
v.push_back(2);
cout<<"Capacity of vector : "<<v.capacity()<<endl; //2
v.push_back(3);
cout<<"Capacity of vector : "<<v.capacity()<<endl; //4 -> b/c ye dynamically size ko double kar deta aur purane vetor ko dump kar deta hai.

cout<<"Size if vetor: "<<v.size()<<endl; //3

// //before pop
// cout<<"Before pop :";
// for(auto i:v){
//     cout<<i<<" "; //1 2 3
// }

// cout<<endl;

// //after pop
// cout<<"after pop last element :";
// v.pop_back();
// for(auto i:v){
//     cout<<i<<" "; //1 2 
// }

cout<<endl;

cout<<"Element at index 2: "<<v.at(2)<<endl;       // 3
cout<<"vector is empty or not "<<v.empty()<<endl;   // 0 -> false
cout<<"First element of array "<<v.front()<<endl;  // 1
cout<<"last element of array "<<v.back();          // 3
} 