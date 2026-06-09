#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[],int n){
    int largest = arr[0];
    for(int i = 1 ;i < n;i++){
        if( arr[i]> largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[] = {2, 5, 1, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = largestElement(arr,n);
    cout<<"largest element is : "<<largest<<endl;
    return 0;
}