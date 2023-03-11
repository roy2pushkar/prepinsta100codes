#include <iostream>

using namespace std;
int sumOfDigits(int num)
{
    int sum=0;
   while(num != 0)
   {
       sum=sum+num%10;
       num=num/10;
   }
   return sum;
}

int main()
{
   int num;
   cin>>num;
   cout<<sumOfDigits(num);
    return 0;
}
