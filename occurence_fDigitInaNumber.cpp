#include <iostream>

using namespace std;

int main()
{
    // int num = 153;
    int num = 717857977;
    int target = 7;
    int count = 0;

    int temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        if (rem == target)
        {
            count++;
        }
        temp = temp / 10;
    }

    cout << count;
}