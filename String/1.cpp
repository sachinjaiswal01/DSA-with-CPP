#include <iostream>
using namespace std;
int getLenght(char name[]){
    int lenght = 0;
    int i=0;
    while(name[i]!='\0'){
        lenght++;
        i++;
    }
    return lenght;
}
int convertTOUppercase(char arr[]){
    int n=getLenght(arr);
    for(int i=0;i<=n-1;i++){
        arr[i]=arr[i]-'a'+'A';
    }
}
int convertTOLowercase(char arr[]){
    int n=getLenght(arr);
    for(int i=0;i<=n-1;i++){
        arr[i]=arr[i]-'A'+'a';
    }
}

int main()
{
   
    // cout << "Enter your name :";
    char arr[100]="SACHIN";
    // cin >> name;
    convertTOLowercase(arr);
    cout<<arr;

    // cout << "lenght " << getLenght(name)<< " hai";


    // char ch[100];
    // // cin>>ch;
    // cin.getline(ch,50);
    // cout<<ch;
}