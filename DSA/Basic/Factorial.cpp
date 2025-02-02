// File name: Factorial.cpp
/*Given a positive integer, n. Find the factorial of n.

Examples :

Input: n = 5
Output: 120
Explanation: 1 x 2 x 3 x 4 x 5 = 120
Input: n = 4
Output: 24
Explanation: 1 x 2 x 3 x 4 = 24
Constraints:
0 <= n <= 12
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int factorial(int n) {
        // code here
        int sum=1;
        if(n==0){
            return 0;
        }
        while(n>0){
            sum*=n;
            n--;
        }
        return sum;
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
        cout << ob.factorial(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends