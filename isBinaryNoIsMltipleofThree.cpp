/*
Given a number in its binary form find if the given binary number is a multiple of 3. It is recommended to finish the task using one traversal of input binary number.

Example 1:

Input: S = "0011"
Output: 1
Explanation: "0011" is 3, which is divisible by 3.
Example 2:

Input: S = "100"
Output: 0
Explanation: "100"'s decimal equivalent is 4, which is not divisible by 3.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isDivisible() which takes the string s as inputs and returns 1 if the given number is divisible by 3 otherwise 0.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ |S| ≤ 105
*/
// Brute Force but it fails when string is too long greater than limit of Long Long
int isDivisible(string s)
{
    // complete the function here
    long long int num = stoll(s); // Convert string to long long int
    long long int decimal = 0;
    int i = 0;

    while (num != 0)
    {
        int digit = num % 10;
        decimal += digit * pow(2, i);
        num = num / 10;
        i++;
    }

    if (decimal % 3 == 0)
    {
        return 1;
    }

    return 0;
}

// Optimal implementation using Bit Manipulation

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int isDivisible(string s)
    {
        // complete the function here
        int evenBitCount = 0;
        int oddBitCount = 0;
        int n = s.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 == 0 && s[i] == '1')
            {
                evenBitCount++;
            }
            else if (i % 2 == 1 && s[i] == '1')
            {
                oddBitCount++;
            }
            else
            {
                continue;
            }
        }
        if (abs(evenBitCount - oddBitCount) % 3 == 0)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
    return 0;
}

// } Driver Code Ends