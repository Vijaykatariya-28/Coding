// File name: Odd_or_Even.cpp
/*Given a positive integer n, determine whether it is odd or even. Return true if the number is even and false if the number is odd.

Examples:

Input: n = 15
Output: false
Explanation: The number is not divisible by 2
Input: n = 44
Output: true
Explanation: The number is divisible by 2
Constraints:
0 <= n <= 104
*/
//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isEven(int n) {
        // code here
        if(n%2==0){
            return true;
        }
        else
            return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        if (ob.isEven(N))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends