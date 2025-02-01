/*Reverse array in groups
Difficulty: BasicAccuracy: 37.48%Submissions: 341K+Points: 1
Given an array arr of positive integers. Reverse every sub-array group of size k.
Note: If at any instance, k is greater or equal to the array size, then reverse the entire array. You shouldn't return any array, modify the given array in place.
Examples:
Input: arr[] = [1, 2, 3, 4, 5], k = 3
Output: [3, 2, 1, 5, 4]
Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.
Input: arr[] = [5, 6, 8, 9], k = 5
Output: [9, 8, 6, 5]
Explnation: Since k is greater than array size, the entire array is reversed.
Constraints:
1 ≤ arr.size(), k ≤ 107
1 ≤ arr[i] ≤ 1018*/

//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void reverseInGroups(vector<int> &arr, int k)
    {
        // code here
        int size = arr.size(); 
         // If k >= size, reverse the entire array  
    if (k >= size) {  
        int left = 0, right = size - 1;  
        while (left < right) {  
            //swap(arr[left], arr[right]);
            int temp = arr[left];  
            arr[left] = arr[right];  
            arr[right] = temp;  
            left++;  
            right--;  
        }  
        return;  
    }  

    // Reverse every group of size k  
    for (int i = 0; i < size; i += k) {  
        int left = i;  
        int right = i+ k-1;
        if (right >= size) {  
            right = size - 1;  
        }  
        // Reverse the sub-array manually  
        while (left < right) {  
            //swap(arr[left], arr[right]);
            int temp = arr[left];  
            arr[left] = arr[right];  
            arr[right] = temp;    
            left++;  
            right--;  
        }  
    }  
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        Solution ob;
        ob.reverseInGroups(arr, k);
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends