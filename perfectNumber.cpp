#include <iostream>
using namespace std;
int perfectNumber(int n)
{
    int sum=0;
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            sum = sum + i;
    }
    return sum;

}

int main ()
{
    int n ;
    cin>>n;
    int res=perfectNumber(n);

    if(res == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";


}
