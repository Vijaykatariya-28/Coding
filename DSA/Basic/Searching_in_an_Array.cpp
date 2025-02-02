// File name: Searching_in_an_Array.cpp
/*Given an integer k and array arr. Your task is to return the position of the first occurrence of k in the given array and if element k is not present in the array then return -1.

Note: 1-based indexing is followed here.

Examples:

Input: k = 16 , arr = [9, 7, 16, 16, 4]
Output: 3
Explanation: The value 16 is found in the given array at positions 3 and 4, with position 3 being the first occurrence.
Input: k=98 , arr = [1, 22, 57, 47, 34, 18, 66]
Output: -1
Explanation: k = 98 isn't found in the given array.
Constraints:
1 <= arr.size <= 106
1 <= arr[i] <= 109
1 <= k <= 106
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int search(int k, vector<int>& arr) {
        // code here
        int result=-1;
        for(int i=0;i<arr.size();i++){
            if(k==arr[i]){
                result= i+1;
                return result;
            }

        }
        return result;
    }
};


//{ Driver Code Starts.
//Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    Solution obj; // Instantiate the Solution object outside the loop

    while (t--) {
        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline character after reading k

        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int res = obj.search(k, arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends