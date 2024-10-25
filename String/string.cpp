#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="sachin";    // sahin
    char arr[10]="jaiswal";
    arr[2]='\0';   //  ja
    str[2]='\0';
    cout<<str<<endl;
    cout<<arr;
}