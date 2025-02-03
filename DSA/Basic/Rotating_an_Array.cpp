// File name: Rotating_an_Array.cpp
/*Given an array arr[]. The task is to rotate the array by d elements where d ≤ arr.size.

Examples:

Input: arr[] = [-1, -2, -3, 4, 5, 6, 7], d = 2
Output: [-3, 4, 5, 6, 7, -1, -2]
Explanation: 
Rotate by 1: [-2, -3, 4, 5, 6, 7, -1]
Rotate by 2: [-3, 4, 5, 6, 7, -1, -2]
Input: arr[] = [1, 3, 4, 2], d = 3 
Output: [2, 1, 3, 4]
Explanation: After rotating the array three times, the first three elements shift one by one to the right.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size ≤ 106
-109 ≤ arr[i] ≤ 109
0 ≤ d ≤ arr.size
*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        // code here
        int Rotate=1;
        int ChangingValue;
        int size=arr.size();
        cout<<"The Value of d is = "<<d<<" And The value of size is = "<<size<<" So d==size-1 = "<<d<<" == "<<size<<endl;
        if(d==0 || size==0 || d==size){
            return;
        }
        d=d%size;

        //Time Complexity
        // for(int i=0;i<(size-1);i++){
        //     if(i==0){
        //     ChangingValue=arr[0];
        //     }
        //     //cout<<"The Value of I is = "<<i<<" And The 0th Value is = "<< ChangingValue<<" AND Swapinng the value of " <<  arr[i] << " With " <<  arr[i+1]<<endl;
        //     arr[i]=arr[i+1];
           
           
        //     if(i==size-2 && Rotate<=d ){
        //    // cout<<"\nReaching Here The Before Value of arr[size-1] = "<<arr[size-1]<<" It Get to be changed By "<<ChangingValue<<endl;
        //     arr[size-1]=ChangingValue;
        //    // cout<<"Ending Here The After Value of arr[size-1] = "<<arr[size-1]<<"\n"<<"And The condition Rotate<d is "<<Rotate<<"<="<<d<<endl;
        //     i=-1;
        //     if (Rotate==d){
        //         break;
        //     }
        //     Rotate+=1;
        //     }

        //     //copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
        //     //cout<<"\n";
        // }

        // Temporary array to store first d elements  
    vector<int> temp(d);  
    for (int i = 0; i < d; i++) {  
        temp[i] = arr[i];  
    }  

    // Shift remaining elements to the left  
    for (int i = d; i < size; i++) {  
        arr[i - d] = arr[i];  
    }  

    // Place stored elements at the end  
    for (int i = 0; i < d; i++) {  
        arr[size - d + i] = temp[i];  
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        ob.leftRotate(arr, d);
        for (int x : arr) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends