#include <iostream>
using namespace std;
int main()
{
    int num = '1';
    switch (num)
    {
    case 1:
        cout << "first" << endl;
        break;
    case '1':
        cout << "character" << endl;
        break;
    default:
        cout << "this is default statement.";
    }
    cout << endl;
    return 0;
}