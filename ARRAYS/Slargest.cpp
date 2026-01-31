#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements :";
    cin >> n;
    if (n < 2)
    {
        cout <<"Second largest element does not exist." << endl;
        return 0;
    }
    cout << "Enter the values :";
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > largest)
        {
            slargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && slargest < nums[i])
        {
            slargest = nums[i];
        }
    }
    cout << "The largest number is : " << largest << endl;
    cout << "The second largest is : " << slargest << endl;

    return 0;
}