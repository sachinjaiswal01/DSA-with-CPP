#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter a decimal number to convert it into binary number: ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;   ///it will givr lrast significant 1 or 0.
        ans = (bit * pow(10, i)) + ans; 
        n = n >> 1;    //right shift by 1.
        i++;
    } 
    cout << "Answer: " << ans << endl;
    return 0;
}
