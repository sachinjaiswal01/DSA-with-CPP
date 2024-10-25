#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sum(int A[], int N)
{
    int sumMM = 0;
    for (int i = 0; i < N; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < N; j++)
        {
            if (A[j] <A[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(A[i], A[minIndex]);
        }
    }
     sumMM = A[0] + A[N - 1];

    return sumMM;
}

int main()
{
    int A[5] = {-2, 1, -4, 5, 3};

    // Call the sum function and print the result
    cout << "Sum: " << sum(A, 5) << endl;

    printArray(A, 5);
}