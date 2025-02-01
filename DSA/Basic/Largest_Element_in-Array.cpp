/* Given an array arr[]. The task is to find the largest element and return it.
Examples:
Input: arr[] = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
Input: arr[] = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.
Input: arr[] = [10]
Output: 10
Explanation: There is only one element which is the largest.
Constraints:
1 <= arr.size()<= 106
0 <= arr[i] <= 106 */

//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int temp=arr[0];
        for(int i=0 ; i< arr.size();i++){
            if(arr[i]>= temp){
                temp = arr[i];
            }
        }
        return temp;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}