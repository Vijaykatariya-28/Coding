// File name: First_Occurence.cpp
/*Find the first occurrence of the string pat in the string txt. The function returns an integer denoting the first occurrence of the string pat in txt (0-based indexing).

Note: You are not allowed to use the inbuilt function. If there is no occurrence then return -1.

Examples :

Input: txt = "GeeksForGeeks", pat = "Fr"
Output: -1
Explanation: Fr is not present in the string GeeksForGeeks as substring.
Input: txt = "GeeksForGeeks", pat = "For"
Output: 5
Explanation: For is present as substring in GeeksForGeeks from index 5 (0 based indexing).
Input: txt = "GeeksForGeeks", pat = "gr"
Output: -1
Explanation: gr is not present in the string GeeksForGeeks as substring.
Constraints:
1 <= txt.size(),pat.size() <= 1000
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to locate the occurrence of the string x in the string s.
class Solution {
  public:
    int firstOccurence(string &txt, string &pat) {
        // Your code here
        int n = 0, m = 0;
    
    // Calculate length of txt
    while (txt[n] != '\0') n++;
    
    // Calculate length of pat
    while (pat[m] != '\0') m++;
     for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (txt[i + j] != pat[j]) {
                match = false;
                break;
            }
        }
        if (match) return i; // Return first occurrence
    }
    return -1; // No match found
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;

        cin >> a;
        cin >> b;
        Solution ob;
        cout << ob.firstOccurence(a, b) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends