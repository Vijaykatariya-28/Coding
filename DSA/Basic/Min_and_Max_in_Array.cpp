/*
Given an array arr. Your task is to find the minimum and maximum elements in the array.
Note: Return a Pair that contains two elements the first one will be a minimum element and the second will be a maximum.
Examples:
Input: arr[] = [3, 2, 1, 56, 10000, 167]
Output: 1 10000
Explanation: minimum and maximum elements of array are 1 and 10000.
Input: arr[] = [1, 345, 234, 21, 56789]
Output: 1 56789
Explanation: minimum and maximum element of array are 1 and 56789.
Input: arr[] = [56789]
Output: 56789 56789
Explanation: Since the array contains only one element so both min & max are same.
*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int min=arr[0];
        int max= arr[0];
        for (int i=0;i<arr.size();i++){
           if (arr[i] < min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }
         return make_pair(min,max);
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<int, int> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } 