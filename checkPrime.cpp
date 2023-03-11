#include <iostream>

using namespace std;
bool checkPrime(int num)
{
    if(num < 2)
      return 0;


      for(int i=2;i<num;i++)
      {
          if(num % i ==0)
          {
              return 0;
          }
      }
   return 1;
}

int main()
{
   int num;
   cin>>num;
   cout<<checkPrime(num);
    return 0;
}
