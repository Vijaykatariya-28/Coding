// File name: Java_Hello_World.cpp
/*Display the most famous phrase at the of beginning any programming language, "Hello World" (without Quotes).

Example:

Input:
Output:
Hello World 
Explanation:
Print Hello World on a single line.
Your Task:  
You don't need to read any input. Your task is to complete the function printHelloWorld() which does not take any input and prints 'Hello World'.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)
*/
//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        Solution ob = new Solution();
        ob.printHelloWorld();
        System.out.println("~");
    }
}

// } Driver Code Ends


class Solution {
    static void printHelloWorld() {
        // code here
         System.out.println("Hello World");
    }
}