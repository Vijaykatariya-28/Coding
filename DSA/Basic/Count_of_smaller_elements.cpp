// File name: Count_of_smaller_elements.cpp
/*Given an unsorted array arr. Find the count of elements less than or equal to the given element x.

Examples:

Input: x = 9, arr = [10, 1, 2, 8, 4, 5] 
Output: 5
Explanation: The 5 elements are 1, 2, 8, 4 and 5.
Input: x = 2, arr = [1, 2, 2, 5, 7, 2, 9] 
Output: 4 
Explanation: The 4 elements are 1, 2, 2 and 2.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= arr.size() <= 105
1 <= ai <= 105
0 <= x <= 105
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // Code Here
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(x>=arr[i]){
               // cout<<"The Value of arr[i] = "<<arr[i]<<" Which is less or equal to x = "<<x<<endl;
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        scanf("%d ", &x);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.countOfElements(x, arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
