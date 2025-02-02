// File name: Decision_Making_in_Java.cpp
//Note : we Have done in CPP
/*Given two integers, n and m. The task is to check the relation between n and m. Return "lesser" if n < m,  "equal" if n == m, and "greater" if n > m.

Examples :

Input: n = 4, m = 8
Output: lesser
Explanation: 4 < 8 so print 'lesser'.
Input: n = 8, m = 8
Output: equal
Explanation: 8 = 8 so print 'equal'.
Input: n = 8, m = 4
Output: greater
Explanation: 8 > 4 so print 'greater'.
Constraints:
-109 <= m , n <= 109
*/

//

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        string result;
        if(n>m){
            result = "greater";
        }
        if(n<m){
             result = "lesser";
        }
        if(n==m){
             result = "equal";
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends