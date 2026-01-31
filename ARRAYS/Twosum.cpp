#include <bits/stdc++.h>
using namespace std;
//using two pointer approach
int main()
{
    //target liya user se 
    int target;
    cout << "Enter the value of target: ";
    cin >> target;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    int left = 0;
    int right = n - 1;
    bool found = false;

    while (left < right)
    {
        int sum = nums[left] + nums[right];

        if (sum == target)
        {
            cout << "Yes, found: " << nums[left] << " " << nums[right];
            found = true;
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    if (!found)
    {
        cout << "Not found";
    }

    return 0;
}
