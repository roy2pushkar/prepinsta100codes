#include <iostream>

using namespace std;

int main()
{
    int temp, rem, product, sum, count;
    int lower, upper;
    cin >> lower >> upper;

    for (int num = lower; num <= upper; num++)
    {
        temp = num;
        count = 0;
        sum = 0;

        while (temp != 0)
        {
            count++;
            temp = temp / 10;
        }

        temp = num;

        while (temp != 0)
        {
            rem = temp % 10;
            product = 1;
            for (int i = 1; i <= count; i++)
            {
                product = product * rem;
            }
            sum = sum + product;
            temp = temp / 10;
        }

        if (num == sum)
        {
            cout << num << " ";
        }
    }

    return 0;
}
