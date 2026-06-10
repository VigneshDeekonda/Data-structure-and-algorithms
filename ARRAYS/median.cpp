#include<bits/stdc++.h>
using namespace std;
void reverseof(int arr[],int n){
    sort(arr, arr + n);

    if(n%2==0){
        int i = (n/2)-1;
        int j = (n/2);
        double total = (arr[i]+arr[j])/2.0;
        cout<<total;
    }else{
        cout<<arr[(n/2)];
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    reverseof(arr,n);
    return 0;
}