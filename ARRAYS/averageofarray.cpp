#include<bits/stdc++.h>
using namespace std;
double averagenumber(int arr[],int n){
    double sum = 0;
    for(int i = 0 ;i < n ;i++){
        sum += (double)arr[i];
    }
    double avg = (double) sum/n;
    return avg;
}
int main(){
    int arr[] = {1,2,1,1,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<averagenumber(arr,n)<<endl;
    cout << fixed << setprecision(2) << averagenumber(arr, n);
    return 0;
}