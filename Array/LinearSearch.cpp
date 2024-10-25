#include <iostream>
using namespace std;

// for yes=1,
// for no=0.

// int LinearSearch(int arr[],int n){
//     for(int i=0;i<=10;i++){
//         if(arr[i]==1){
//             return true;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

//     int result=LinearSearch(arr,10);

//     cout<<endl<<"1 is present: "<<result<<endl<<endl;

// }

// Second methode to search element presentee in arrya.

bool LineraSearch(int arr[], int n, int key)
{
    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    cout << "Enter the key to be search:";
    int key;
    cin >> key;
    bool found = LineraSearch(arr, 10, key);
    if (found)
    {
        cout << "Key is present!";
    }
    else
    {
        cout << "Key is absent!";
    }
}