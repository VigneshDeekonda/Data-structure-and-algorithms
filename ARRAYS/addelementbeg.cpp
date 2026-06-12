#include <bits/stdc++.h>
using namespace std;
int begining( vector<int>&arr,int n, int val){
    arr.resize(n+1);
    for(int i=n-1;i>=0;i--)
    {
         arr[i+1]=arr[i];
        
     }
    arr[0]=val;
    return n;
}
int main()
{
    int n;
    cout << "ENTER THE SIZE OF THE ARRAY : ";
    cin >> n;
    vector<int>arr(n);
    cout << "Enter the values to add in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int val;
    cout << "Enter the value to be add : ";
    cin >> val;
    arr.insert(arr.begin(),val);
    begining(arr,n,val);
    for(int num : arr){
        cout<<num<< " ";
    }
    return 0;
}
