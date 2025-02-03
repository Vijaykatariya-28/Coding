// File name: Max_Min.cpp
/*
Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.

Example 1:

Input:
N = 5
A[] = {-2, 1, -4, 5, 3}
Output: 1
Explanation: min = -4, max =  5. Sum = -4 + 5 = 1
 

Example 2:

Input:
N = 4
A[]  = {1, 3, 4, 1}
Output: 5
Explanation: min = 1, max = 4. Sum = 1 + 4 = 5
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function findSum() which takes the array A[] and its size N as inputs and returns the summation of minimum and maximum element of the array.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/
//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
        if(N<=0){
            return 0;
        }
        int max=A[0];
        int min=A[0];
        for(int i=1;i<N;i++){
           // cout<<"The Value of A[i] is : "<<A[i]<<endl;
            if(A[i]<min){
                min=A[i];
            }
              if(A[i]>max){
                max=A[i];
            }
       // cout<<"The Value of Min is : "<<min<<" The Value of Max is : "<<max<<endl;
        }
        int sum = max+min;
        return sum;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends