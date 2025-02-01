/*Reverse_a_String
You are given a string s, and your task is to reverse the string.
Examples:
Input: s = "Geeks"
Output: "skeeG"
Input: s = "for"
Output: "rof"
Input: s = "a"
Output: "a"
Constraints:
1 <= s.size() <= 106
s contains only alphabetic characters (both uppercase and lowercase).

 */

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int size= s.size();
        string u = "";
        for(int i=s.size(); i>=0;i--){
            u += s[i];
        }
        return u;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseString(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends