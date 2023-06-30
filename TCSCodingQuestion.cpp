/*
TCS Coding Question Day 1 Slot 1 – Question 2
Jack and Jill are playing a string game. Jack has given Jill two strings A and B. Jill has to derive a string C from A, by deleting elements from string A, such that string C does not contain any element of string B. Jill needs help to do this task. She wants a program to do this as she is lazy. Given strings A and B as input, give string C as Output.

Example 1:

Input:
tiger     -> input string A
ti          -> input string B
Output:
ger       -> Output string C
Explanation:
After removing “t” and “i” from “tiger”, we are left with “ger”.
So, the answer is “ger”.
Example 2:

Input:
processed     -> input string A
esd                -> input string B
Output:
proc               -> Output string C
Explanation:
After removing “e” “s” and “d” from “processed”, we are left with “proc”.
So, the answer is “proc”.
Example 3:

Input:
talent        -> input string A
tens          -> input string B
Output:
al              -> Output string C
Explanation:
After removing “t” “e” and “n” from “talent”, we are left with “al”.
So, the answer is “al”.
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string A = "tigerrrrrttyikh";
    string B = "ti";
    string res = "";
    string C;

    for (char ch : A)
    {
        bool found = false;
        for (char b : B)
        {
            if (ch == b)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            C += ch;
        }
    }
    for (int i = 0; i < C.length(); i++)
    {
        cout << C[i];
    }

    return 0;
}
