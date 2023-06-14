#include <iostream>

using namespace std;
int getFactorial(int n)
{
    if(n==0)
    {
        return 1;

    }
    return n*getFactorial(n-1);
}

int main()
{

    int n=5;
    int fact = getFactorial(n);
    cout<<"Value is " << fact;

    return 0;
}
