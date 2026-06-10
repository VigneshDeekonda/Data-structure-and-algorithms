// Example 1:
// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	            5  2
//                 15  1
// Explanation: 10 occurs 3 times in the array
// 	      5 occurs 2 times in the array
//               15 occurs 1 time in the array

// Example2: 
// Input: arr[] = {2,2,3,4,4,2};
// Output: 2  3
// 	           3  1
//                4  2
// Explanation: 2 occurs 3 times in the array
// 	     3 occurs 1 time in the array
//              4 occurs 2 time in the array   


// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
// public:
// void Count_frequency(vector<int>&arr){
//     int n = arr.size();
//     map<int,int>mp;
//     for(int i = 0 ;i<n;i++){
//         mp[arr[i]]++;
//         }
//         for( auto x : mp){
//             cout<<x.first<<" "<<x.second<<endl;
//         }
//     }
// };

// int main(){
//     Solution sol;
//     vector<int>arr = {10,5,10,15,10,5};
//     sol.Count_frequency(arr);
//     return 0;

// }
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void Count_frequency(vector<int>& arr) {
//         map<int, int> mp;
//         for (int i = 0; i < arr.size(); i++) {
//             mp[arr[i]]++;
//         }
//         for (auto x : mp) {
//             cout << x.first << " " << x.second << endl;
//         }
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> arr = {10, 5, 10, 15, 10, 5};
//     sol.Count_frequency(arr);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void Count_frequency(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }
        for(int i = 0; i < arr.size(); i++) {
            if(freq[arr[i]] != 0) {
                cout << arr[i] << " " << freq[arr[i]] << endl;

                // Mark as printed
                freq[arr[i]] = 0;
            }
        }
    }
};
int main() {
    Solution sol;
    vector<int> arr = {10, 5, 10, 15, 10, 5};
    sol.Count_frequency(arr);
    return 0;
}
