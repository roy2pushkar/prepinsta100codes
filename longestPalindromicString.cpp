/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool ispalindrome(string ans)
{
    int n = ans.length();
    int s = 0;
    int end = n - 1;
    while (s <= end)
    {
        if (ans[s++] == ans[end--])
            return true;

        else
            return false;
    }
    return true;
}
string getAns(string str)
{
    int n = str.length();
    int maxm = INT_MIN;
    string res = "";

    for (int i = 0; i < n; i++)
    {
        string ans = "";
        for (int j = i; j < n; j++)
        {

            ans += str[j];
            int len = ans.length();
            if (len > maxm)
            {
                if (ispalindrome(ans))
                {
                    res = ans;
                    maxm = len;
                }
            }
        }
    }
    return res;
}

int main()
{
    string str = "gsabbbcbbbah";
    string res = getAns(str);
    cout << res << endl;

    return 0;
}