/*Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes n as a parameter and prints the number from 1 to n recursively.
Note: Don't print any newline, it will be added by the driver code.
Examples:

Input: n = 10
Output: 1 2 3 4 5 6 7 8 9 10
Input: n = 5
Output: 1 2 3 4 5
Input: n = 1
Output: 1
Constraints:
1 <= n <= 1000*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    int i=1;
    void printNos(int n) {
        // Your code here
        if(n==0){
            return;
        }
       cout<<i<< " ";
       i++;
       n--;
       printNos(n);
    }


};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends