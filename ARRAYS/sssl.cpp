// Find Second Smallest and Second Largest Element in an array
#include <bits/stdc++.h>
using namespace std;
// function of secondsmallest
int secondsmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {  
            ssmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int secondlargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        { 
            slargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ssmallest = secondsmallest(arr, n);
    int slargest = secondlargest(arr, n);
    cout << "SECOND SMALLEST ELEMENT IS : " << ssmallest << endl;
    cout << "SECOND LARGEST ELEMENT IS : " << slargest << endl;
}
