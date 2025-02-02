// File name: First_and_Second_Smallests.cpp
/*
Given an array, arr of integers, your task is to return the smallest and second smallest element in the array. If the smallest and second smallest do not exist, return -1.

Examples:

Input: arr[] = [2, 4, 3, 5, 6]
Output: 2 3 
Explanation: 2 and 3 are respectively the smallest and second smallest elements in the array.
Input: arr[] = [1, 1, 1]
Output: -1
Explanation: Only element is 1 which is smallest, so there is no second smallest element.
Expected Time Complexity: O(n)
Expected Auxillary Space: O(1)

Constraints:
1 <= arr.size <= 105
1 <= arr[i] <= 105
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
#include <limits.h>
#include <random>
#include <sstream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        vector<int> result;
        if (arr.size() < 2) {
        result.push_back(-1);
        return result;
    }
        int FirstMin=INT_MAX;
        int SecondMin=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<FirstMin){
                SecondMin=FirstMin;
                FirstMin=arr[i];
            }
            if (arr[i] < SecondMin && arr[i] != FirstMin) {
            SecondMin = arr[i];
        }
        }
        if(FirstMin==SecondMin){
            result.push_back(-1);
            return result;
        }
    result.push_back(FirstMin);
    result.push_back(SecondMin);
    return result;
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
        vector<int> ans = ob.minAnd2ndMin(arr);
        if (ans[0] == -1)
            cout << -1 << endl;
        else
            cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends