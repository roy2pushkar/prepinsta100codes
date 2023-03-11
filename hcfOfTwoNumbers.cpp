#include <iostream>

using namespace std;
int greatestThree(int a , int b)
{
    int num1=a;
    int num2=b;

   while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
     return num1;
}

int main()
{
   int a,b;
   cin>>a>>b;
   cout<<greatestThree(a,b)<<endl;

    return 0;
}
