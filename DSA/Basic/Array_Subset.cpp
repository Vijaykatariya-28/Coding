/*Given two arrays a[] and b[] of size m and n respectively, the task is to determine whether b[] is a subset of a[]. Both arrays are not sorted, and elements are distinct.
Examples:
Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
Output: true
Explanation: b[] is a subset of a[]
Input: a[] = [1, 2, 3, 4, 4, 5, 6], b[] = [1, 2, 4]
Output: true
Explanation: b[] is a subset of a[]
Input: a[] = [10, 5, 2, 23, 19], b[] = [19, 5, 3]
Output: false
Explanation: b[] is not a subset of a[]
Constraints:
1 <= a.size(), b.size() <= 105
1 <= a[i], b[j] <= 106*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Right Solution but time complexity due to O[Mx N]
// } Driver Code Ends
class Solution {
  public:
    // Function to check if b is a subset of a
   bool isSubset(const vector<int>& a, const vector<int>& b) {
    for (int i = 0; i < b.size(); i++) {
        bool found = false; // We will track if we find the element in a[]
        for (int j = 0; j < a.size(); j++) {
            if (b[i] == a[j]) {
                found = true;  // Element found in a[], no need to check further
                break;  // Break the inner loop as we found the element
            }
        }
        if (!found) {
            return false;  // If any element of b[] is not found in a[], return false
        }
    }
    return true;  // All elements of b[] found in a[], return true
}
}; */

// } Driver Code Ends
class Solution {
  public:
    // Function to check if b is a subset of a
   bool isSubset(const vector<int>& a, const vector<int>& b) {
    unordered_set<int> aSet(a.begin(), a.end()); // 🌸 Create set in O(n)
    for (int num : b) { // Check all elements of b
        if (aSet.find(num) == aSet.end()) { // 💖 O(1) lookup
            return false; // Not a subset
        }
    }
    return true; // All elements of b found in a
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a1, a2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a1.push_back(number);
        }
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            a2.push_back(number);
        }
        Solution s;
        bool ans = s.isSubset(a1, a2);
        if (ans) {
            cout << "true"
                 << "\n";
        } else {
            cout << "false"
                 << "\n";
        }
        cout << "~"
             << "\n";
    }
    return 0;
}
// 