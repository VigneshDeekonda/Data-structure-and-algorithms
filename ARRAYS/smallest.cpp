#include <bits/stdc++.h>
using namespace std;

// function for smallest number to find in the array
int Smallestnumber(int arr[], int n)
{
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    
    int arr[] = {2, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest = Smallestnumber(arr, n);
    cout << "Minimum number for the array is : " << smallest << endl;
    return 0;
}
