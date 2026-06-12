#include <bits/stdc++.h>
using namespace std;
void repeatitive(vector<int> &arr)
{
    unordered_map<int, int> map;
    for (auto i : arr)++map[i];

    cout << "THE REPEATING ELEMENTS IN AN ARRAY IS : ";
    for (auto i : map)
    {
        if (i.second > 1) 
        cout<<i.first<<" ";
    }
}
int main()
{
    int n;
    cout << "ENTER THE SIZE OF THE ARRAY : ";
    cin >> n;
    vector<int> arr(n);
    cout << "ENTER THE VALUES : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    repeatitive(arr);
    return 0;
}

