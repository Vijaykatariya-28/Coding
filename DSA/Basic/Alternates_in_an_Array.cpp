// File name: Alternates_in_an_Array.cpp
/*You are given an array arr[], the task is to return a list elements of arr in alternate order (starting from index 0).

Examples:

Input: arr[] = [1, 2, 3, 4]
Output: 1 3
Explanation:
Take first element: 1
Skip second element: 2
Take third element: 3
Skip fourth element: 4
Input: arr[] = [1, 2, 3, 4, 5]
Output: 1 3 5
Explanation:
Take first element: 1
Skip second element: 2
Take third element: 3
Skip fourth element: 4
Take fifth element: 5
Constraints:
1 <=  arr.size <= 105
1 <= arr[i] <= 105
*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int> alternates;
        for(int i=0;i<arr.size();i+=2){
                alternates.push_back(arr[i]);
            
        }
        return alternates;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution sln;
        vector<int> list = sln.getAlternates(arr);
        for (int i : list)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends