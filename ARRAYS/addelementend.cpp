#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int val;
    cout << "enter the value to add : ";
    cin >> val;
    arr.insert(arr.end(), val);
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}


