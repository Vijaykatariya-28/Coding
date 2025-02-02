/*Given an array arr. Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).
Note: There can be more than one element in the array which have the same value as its index. You need to include every such element's index. Follows 1-based indexing of the array.
Examples:

Input: arr[] = [15, 2, 45, 4 , 7]
Output: [2, 4]
Explanation: Here, arr[2] = 2 exists here and arr[4] = 4 exists here.
Input: arr[] = [1]
Output: [1]
Explanation: Here arr[1] = 1 exists.
Constraints:
1 ≤ arr.size ≤ 105
1 ≤ arr[i] ≤ 106
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int> Indices;
        for(int i=0;i<=arr.size();i++){
            if(arr[i] == i + 1){
                Indices.push_back(i+1);
            }

        }
        return Indices;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(nums);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x : ans) {
                cout << x << " ";
            }
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends