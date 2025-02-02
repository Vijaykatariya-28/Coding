/*Given a number n, return an array containing the first n Fibonacci numbers.
Note: The first two numbers of the series are 0 and 1.

Examples:

Input: n = 5
Output: [0, 1, 1, 2, 3]
Input: n = 7
Output: [0, 1, 1, 2, 3, 5, 8]
Input: n = 2
Output: [0, 1]
Constraints:
1 <= n <= 30
*/

//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> arr(n);
        arr[0]=0;
        arr[1]=1;
        for (int i=2;i<n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking number of elements
        int n;
        cin >> n;
        Solution obj;
        // calling function printFibb()
        vector<int> ans = obj.fibonacciNumbers(n);

        // printing the elements of vector
        for (int i : ans)
            cout << i << ' ';
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends