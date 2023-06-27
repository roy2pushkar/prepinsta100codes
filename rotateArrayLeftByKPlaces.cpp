#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int k, int n)
{
    // Your code goes here
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[(i + k) % n];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}