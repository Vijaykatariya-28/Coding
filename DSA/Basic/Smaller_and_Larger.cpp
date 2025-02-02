// File name: Smaller_and_Larger.cpp
/*Given a sorted array arr and a value target, return an array of size 2. The first value is the number of elements less than or equal to the target, and the second value is the number of elements greater than or equal to the target.

Examples:

Input: arr[] = [1, 2, 8, 10, 11, 12, 19],  target = 0
Output: 0, 7
Explanation: There are no elements less or equal to 0 and 7 elements greater to 0.
Input: arr[] = [1, 5, 8, 12, 12, 12, 19], target = 12
Output: 6, 4
Explanation: There are 6 elements less or equal to 12 and 4 elements greater or equal to 12.
Constraints:
1 ≤ arr.size ≤ 105
0 ≤ arr[i], target≤ 106
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
        vector<int> result;
        int minCount =0;
        int maxCount = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=target){
                minCount++;
            }
            if(arr[i]<=target){
                maxCount++;
            }
        }
        result.push_back(maxCount);
        result.push_back(minCount);
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        Solution ob;
        vector<int> ans = ob.getMoreAndLess(arr, x);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends
