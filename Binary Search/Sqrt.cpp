#include <iostream>
using namespace std;

long long int mySqrt(int x) {
    if (x == 0) {
        return 0;
    }

    int s = 1;
    int e = x;
    long long ans = -1;

    while (s <= e) {
        long long mid = s + (e - s) / 2;

        if (mid * mid == x) {
            return mid;
        }

        if (mid * mid < x) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}
double morePrecision(int x,int precision,int tempSol){
    double factor=1;
    double ans=tempSol;

    for(int i=0 ;i<precision;i++){
        factor =factor/10;
        
        for(double j=ans;j*j<x;j=j+factor){
            ans=j;
        }
    }
    return ans;

}
int main() {
    int x;
    cout<<"Enter a number:";
    cin>>x;

    int tempSol=mySqrt(x);
    cout <<"Answer : "<< morePrecision(x,3,tempSol) << endl; 

    return 0;
}
