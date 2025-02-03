// File name: Print_Elements_of_Array.cpp
/*Given an array arr[], print all its elements space-separated.

Note: You don't need to move to the next line after printing all elements of the array (space-separated)

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: 1 2 3 4 5
Input: arr[] = [2, 3, 5, 5]
Output: 2 3 5 5
Constraints:
1 <= arr.size <= 106
1 <= arr[i] <= 108
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    void printArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
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
        Solution ob;
        ob.printArray(arr);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends