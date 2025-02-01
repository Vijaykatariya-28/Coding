/*
Given a number n, determine whether it is a prime number or not. A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
Examples :
Input: n = 7
Output: true
Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.
Input: n = 25
Output: false
Explanation: 25 has more than two divisors: 1, 5, and 25, so it is not a prime number.
Input: n = 1
Output: false
Explanation: 1 has only one divisor (1 itself), which is not sufficient for it to be considered prime.
Constraints:
1 ≤ n ≤ 109
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n%2==0){
            if(n == 2){
                return true;
            }
            return false;
        }
        for (int i=3;i<n;i+=2){
            int temp = n%i;
            if( n%i==0){
                return false;
                break;
            }
        }
return true;
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
        cout << (ob.isPrime(N) ? "true" : "false") << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends