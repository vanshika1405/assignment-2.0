
#include <iostream>
#include <algorithm>
using namespace std;
 
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 

void reverse(int arr[], int low, int high)
{
    if (low < high)
    {
        swap(arr[low], arr[high]);
        reverse(arr, low + 1, high - 1);
    }
}
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, 0, n-1);
    print(arr, n);
 
    return 0;
}