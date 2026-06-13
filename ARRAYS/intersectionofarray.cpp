#include <bits/stdc++.h>
using namespace std;
vector<int> intersectionofarray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int>intersection;
    int m = arr1.size();
    int n = arr2.size();
    int i = 0;
    int j = 0;

    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr1[i]>arr2[j]){
            j++;
        }else{
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return intersection;
}
int main()
{
    vector<int> arr1 = {1, 1, 2, 2, 2, 4};
    vector<int> arr2 = {2, 2, 4, 4};
    vector<int> result = intersectionofarray(arr1, arr2);
    cout<<"INTERSECTION OF ARRAT IS : ";
    for (int x : result)
    {
        cout << x <<" " ;
    }
}