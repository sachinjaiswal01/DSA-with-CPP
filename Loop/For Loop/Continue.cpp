#include<iostream>
using namespace std;
int main(){

// for(int i=0;i<=5;i++){
//     cout<<"hi"<<endl;
//     cout<<"hey"<<endl;
//     continue;
//     cout<<"reply toh karde";

// }

// for(int i=0;i<=15;i+=2){
//     cout<<i<<" ";
//     if(i&1){
//         continue;
//     }
//     i++;
// }

for(int i=0;i<5;i++){
    for(int j=0;j<=5;j++){
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}
return 0;
}