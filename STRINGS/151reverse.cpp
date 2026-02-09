// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     string stringreversal(string s)
//     {
//         int n = s.size();
//         string ans = "";

//         reverse(s.begin(), s.end());

//         for (int i = 0; i < n; i++)
//         {
//             string word = "";

//             while (i < n && s[i] != ' ')
//             {
//                 word += s[i];
//                 i++;
//             }
//             reverse(word.begin(), word.end());
//             if (word.length() > 0)
//             {
//                 ans += word + " ";
//             }
//         }
//         ans.pop_back(); // remove last space
//         return ans;
//     }
// };

// int main()
// {
//     string s = " vignesh deekonda";
//     Solution ob;
//    cout << ob.stringreversal(s);
//    return 0;
// }

