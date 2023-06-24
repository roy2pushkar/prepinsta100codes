#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string str = "aabbbbeeeeffggg";
    int n = str.length();
    string st = "";
    int cnt = 1;

    for (int i = 1; i < n; i++)
    {

        if (str[i] == str[i - 1])
        {
            cnt++;
        }
        else
        {

            st += str[i - 1] + to_string(cnt);

            cnt = 1;
        }
    }
    st += str.back() + to_string(cnt);

    cout << st << endl;
    return 0;
}