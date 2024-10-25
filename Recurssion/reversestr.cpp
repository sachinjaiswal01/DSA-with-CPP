#include<iostream>
using namespace std;


string reverse(string str ,int s ,int e, int size){
    if(s>=e){
        return str;
    }
    swap(str[s],str[e]);
    return reverse(str,s+1,e-1 ,size-1);
}
int main(){
    string str;
    cin>>str;
    int size =7;
    cout<<reverse(str,0,size-1,size);
}