#include <iostream>

using namespace std;
int sumInRange(int min,int max)
{
    int sum=0;
    for(int i=min;i<=max;i++)
{
    sum+=i;
}
return sum;
}

int main()
{
   int min,max;
   cin>>min>>max;
   cout<<sumInRange(min,max);
    return 0;
}
