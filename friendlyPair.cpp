#include <iostream>

using namespace std;

int friendlyPair(int num)
{

    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}
int main()
{

    int num1 = 6, num2 = 28;

    int sum1 = friendlyPair(num1);
    int sum2 = friendlyPair(num2);

    if (sum1 / num1 == sum2 / num2)
        cout << num1 << " & " << num2 << " are friendly pairs";
    else
        cout << num1 << " & " << num2 << " are not friendly pairs";
}