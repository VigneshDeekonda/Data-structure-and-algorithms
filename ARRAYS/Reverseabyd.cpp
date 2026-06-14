#include<bits/stdc++.h>
using namespace std;
void reversebyd(vector<int>arr,int n, int k){
    reverse(arr.begin(),arr.begin()+k);
}
int main(){
    int n;
    cout<<"Enter the Size of the array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of K : ";
    cin>>k;
    reversebyd(arr,n,k);
    for(int num : arr){
        cout<<num<< " ";
    }
    return 0;
}