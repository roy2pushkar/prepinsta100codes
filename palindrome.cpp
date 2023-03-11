
#include <iostream>

using namespace std;
int greatestThree(int num)
{
    int temp=num;
    int reverse=0,rem;
    while(temp != 0)
    {
        rem=temp %10;
        reverse=reverse *10 +rem;
        temp=temp/10;
    }
    if(num==reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   int num;
   cin>>num;
   cout<<greatestThree(num)<<endl;

    return 0;
}
