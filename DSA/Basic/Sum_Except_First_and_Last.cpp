// File name: Sum_Except_First_and_Last.cpp
/*ou are given an array arr of numbers. Return the sum of all the elements except the first and last elements.

Examples:

Input: arr[] = [5, 24, 39, 60, 15, 28, 27, 40, 50, 90]
Output: 283
Explanation: The sum of all the elements except the first and last element is 283.
Input: arr[] = [5, 10, 1, 11]
Output: 11
Explanation: The sum of all the elements except the first and last element is 11.
Input: arr[] = [5, 10]
Output: 0
Explanation: The sum of all the elements except the first and last element is 0.
Constraints:
2<=arr.size()<=105
2<=arr[i]<=105
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are required to complete this method*/
    int sumExceptFirstLast(vector<int>& arr) {
        // Your code here
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(i==0 || i==arr.size()-1){
                continue;
            }
            sum+=arr[i];
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.sumExceptFirstLast(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends