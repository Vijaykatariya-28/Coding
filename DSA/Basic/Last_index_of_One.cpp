// File name: Last_index_of_One.cpp
/*Given a string s consisting of only '0's and '1's,  find the last index of the '1' present.

Note: If '1' is not present, return "-1"

Examples:

Input: s = 00001
Output: 4
Explanation: Last index of  1 in given string is 4.
Input: s = 0
Output: -1
Explanation: Since, 1 is not present, so output is -1.
Expected Time Complexity: O(n)
Expected Auxillary Space: O(1)

Constraints:
1 <= |s| <= 106
s = {0,1}
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lastIndex(string s) {
         bool flag = false;  // To track if '1' is found
        int n = s.length(); // Length of the string
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                flag = true; // '1' found, set flag to true
                return i;    // Return the last index of '1'
                break;       // Break the loop
            }
        }

        // If '1' is not found, return -1
        if (flag == false) {
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends