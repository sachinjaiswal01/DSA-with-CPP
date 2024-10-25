#include<iostream>
#include<deque>
using namespace std;

int main(){
    //creation 
    deque<int>d;

    //insertion
    d.push_back(1);
    d.push_front(2);
    cout<<"Element back "<<d.back()<<endl;   //1
    cout<<"Element front "<<d.front() <<endl; //2
    cout<<"Element at index "<<d.at(1)<<endl;  //1
    cout<<"Element is empty or not "<<d.empty()<<endl; //0 
    cout<<"Before erase ,";
    cout<<"Element size : "<<d.size()<<endl;  //2
    d.erase(d.begin(),d.begin()+1); 
    cout<<"after erase, ";
    cout<<"Element size: "<<d.size()<<endl; //1
}