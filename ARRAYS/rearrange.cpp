#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rearrangeArray(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        reverse(arr.begin() + n / 2, arr.end());
    }
};
int main()
{
    vector<int> arr = {8, 7, 1, 6, 5, 9};
    Solution sol;
    sol.rearrangeArray(arr);
    for (int x : arr)
        cout << x << " ";
}