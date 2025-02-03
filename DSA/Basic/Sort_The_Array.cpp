// File name: Sort_The_Array.cpp
/*Given a random array arr of numbers, please return them in ascending sorted order. 
Note: Use Inbuilt functions to Sort the given array

Examples:

Input: arr[] = [1, 5, 3, 2]
Output: [1, 2, 3, 5]
Explanation: After sorting array will be like [1, 2, 3, 5].
Input: arr[] = [3, 1]
Output: [1, 3]
Explanation: After sorting array will be like [1, 3].
Input: arr[] = [1, 2, 3]
Output: [1, 2, 3]
Explanation: It's already in expected form.
Constraints:
1 ≤ arr.size ≤ 105
1 ≤ arr[i] ≤ 105
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sortArr(vector<int> &arr) {

        //Time Complexity
        // code here
        // int size=arr.size();
        // for(int i=0;i<size-1;i++){
        //     cout<<i<<"\n";
        //     if(arr[i]>arr[i+1]){
        //         cout<<"The Value Before Swap of I is = "<<i<<" The Value Before Swap of arr[i] = "<<arr[i]<<" And "<<" arr[i+1] = "<< arr[i+1]<<endl;
        //         int swap=arr[i];
        //         arr[i]=arr[i+1];
        //         arr[i+1]=swap;
        //         cout<<"The Value After Swap of I is = "<<i<<" The Value After Swap of arr[i] = "<<arr[i]<<" And "<<" arr[i+1] = "<< arr[i+1]<<endl; 
        //         i = -1;
        //     }
        // }
        
        sort(arr.begin(), arr.end());
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.sortArr(nums);
        for (auto i : nums)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends