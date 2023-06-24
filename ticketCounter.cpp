
#include <bits/stdc++.h>
using namespace std;

int distributeTicket(int N, int k)
{
    // code here
    queue<int> queue1;
    queue<int> queue2;
    queue<int> queue3;

    // Initialize queue1 with numbers from 1 to N
    for (int i = 1; i <= N; i++)
        queue1.push(i);

    // Initialize queue1 with numbers from N to 1
    for (int i = N; i >= 1; i--)
        queue2.push(i);

    int count = 0;
    while (count < N)
    {
        int temp = k;
        while (temp-- && count < N)
        {
            int t = queue1.front();
            queue1.pop();
            queue3.push(t);
            count++;
        }
        temp = k;
        while (temp-- && count < N)
        {
            int t = queue2.front();
            queue2.pop();
            queue3.push(t);
            count++;
        }
    }
    for (int i = 1; i < N; i++)
    {
        queue3.pop();
    }
    int t = queue3.front();
    return t;
}

int main()
{

    int N = 9;

    int K = 2;

    int res = distributeTicket(N, K);

    cout << res << endl;
}
