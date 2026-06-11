#include <bits/stdc++.h>
using namespace std;
int random_position(vector<int>&arr, int n,int val,int pos)
{
    arr.resize(n + 1);
    for(int i = 0 ; i < pos;i++){

    }
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
    int pos;
    cout << "Enter the position at which you want to add : ";
    cin>>pos;
    arr.insert(arr.begin()+pos,val);
    random_position(arr,n,val,pos);
    for(int num : arr){
        cout<<num<< " ";
    }
    return 0;
}
