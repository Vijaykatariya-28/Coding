/*Given an array arr, rotate the array by one position in clockwise direction.
Examples:
Input: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.
Constraints:
1<=arr.size()<=105
0<=arr[i]<=105*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void rotate(vector<int> &arr)
    {
        // code here
        int n = (arr.size() - 1);
        int last =arr[n];
        for (int i = n; i > 0; i--) {
            arr[i] = arr[i - 1];  // Move elements right
        }
        arr[0]=last;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        Solution ob;
        ob.rotate(arr);
        for (long long i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
