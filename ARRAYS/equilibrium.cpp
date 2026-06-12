#include <bits/stdc++.h>
using namespace std;
int equilibrium(vector<int> &arr)
{
    int n =arr.size();
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    int leftsum = 0;
    int rightsum = total;

    for (int i = 0; i < n; i++)
    {
        rightsum -= arr[i];

        if (leftsum == rightsum)
        {
            return i;
        }
        leftsum += arr[i];
    }   
    return -1;
}
int main()
{
    vector<int> arr = {2, 3, -1, 8, 4};
    int x = equilibrium(arr);
    cout<<"equillibrium no is : "<<x;
    return 0;

}