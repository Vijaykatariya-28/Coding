// File name: LCM_And_GCD.cpp
/*Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function inputs two integers a and b and returns a list containing their LCM and GCD.

Examples:

Input: a = 5 , b = 10
Output: [10, 5]
Explanation: LCM of 5 and 10 is 10, while their GCD is 5.
Input: a = 14 , b = 8
Output: [56, 2]
Explanation: LCM of 14 and 8 is 56, while their GCD is 2.
Input: a = 1 , b = 1
Output: [1, 1]
Explanation: LCM of 1 and 1 is 1, while their GCD is 1.
Expected Time Complexity: O(log(min(a, b))
Expected Auxiliary Space: O(1)

Constraints:
1 <= a, b <= 109
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> lcmAndGcd(int a, int b)
    {
        // code here
        vector<int> LcmGcd;
        int max;
        if (a > b){
            max = a;
        }
        else{ max = b;
        }
        int gcd;
        for(int i=max-1;i>0;i--){
            if((a%i==0) &&(b%i==0)){ 
                gcd=i;
                break;
            }
        }
        int lcm=(a*b)/gcd;
        LcmGcd.push_back(lcm);
        LcmGcd.push_back(gcd);
        return LcmGcd;
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } D