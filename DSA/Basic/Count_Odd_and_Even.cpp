// File name: Count_Odd_and_Even.cpp
/*Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.

Note: Return two elements where the first one in the count of odd & second one is the count of even.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: 3 2
Explanation: There are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).
Input: arr[] = [1, 1]
Output: 2 0
Explanation: There are 2 odd elements (1, 1) and no even elements.
Constraints:
1 <= arr.size <= 106
1 <= arr[i] <= 106
*/

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int Even=0;
        int Odd=0;
         for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            Even++;
            }
            else{
                Odd++;
            }
        }
        return make_pair(Odd,Even);
    }
};

//{ Driver Code Starts.
int main() {

    // Testcase input
    int testcase;
    cin >> testcase;
    cin.ignore();

    while (testcase--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        pair<int, int> res = ob.countOddEven(arr);
        cout << res.first << " " << res.second << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends