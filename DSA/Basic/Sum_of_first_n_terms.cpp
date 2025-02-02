// File name: Sum_of_first_n_terms.cpp
/*Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

Examples:

Input: n = 5
Output: 225
Explanation: 13 + 23 + 33 + 43 + 53 = 225
Input: n = 7
Output: 784
Explanation: 13 + 23 + 33 + 43 + 53 + 63 + 73 = 784
Constraints:
1 <= n <= 200 
*/


//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
         int sum=0;
        // for(int i=1;i<=n;i++){
        //     sum+= i*i*i;
        //     cout<<"Multiply "<<i*i*i<<" AND SUM="<<sum<<endl;
        // }

        sum=(n*(n+1)/2)* (n*(n+1)/2);
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
        cout << ob.sumOfSeries(N) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends