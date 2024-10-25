#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// bool cmp(char x ,char y){
//     return x > y ;  //asscanding order  ->snihca  for sachin

// }
bool compare(int x,int y){
    return x > y;
}


int main(){
    // string s= "sachin";
    // sort(s.begin(), s.end(),cmp);
    // cout<< s ;

    vector<int>v {1,5,2,4,3};
    sort(v.begin(), v.end(),compare);
    for(auto i:v){
        cout<< i <<" ";
    }
}