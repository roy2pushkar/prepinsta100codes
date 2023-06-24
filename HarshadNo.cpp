#include <iostream>

using namespace std;

int main()
{
    // int num = 153;
    int num = 71;
    int sum = 0;
    int temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += rem;
        temp = temp / 10;
    }

    if (num % sum == 0)
        cout << num << " is Harshad No";
    else
        cout << num << " is Not Harshad  Number ";
}