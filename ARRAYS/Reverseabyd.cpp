#include<bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int>& arr) {
    unordered_map<int, int> elementCount;  // Map to store element counts
    for(auto i : arr) ++elementCount[i];  // Count occurrences of each element
    
    cout << "The repeating elements are: ";
    for(auto i : elementCount) {
        if(i.second > 1)  // If the element appears more than once
            cout << i.first << " ";  // Print the element
    }
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 4, 4, 5, 2};  // Example input
    findRepeatingElements(arr);  // Call function to find repeating elements
    
    return 0;
}
