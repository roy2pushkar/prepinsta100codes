#include <iostream>

using namespace std;
string reverseWord(string str ){

  //Your code here
  //int n=str.length();
  //int st=0;
  //int end=n-1;
  int n=str.length();
  for(int i=0;i<n/2;i++{
      swap(str[i],str[n-i-1]);
  }
  return str;

}

int main()
{   //int n;
   // cin>>n;
    string str;
    getline(cin,str);
    //cin>>str;
    cout<<reverseWord(str )<<str<<endl;

    return 0;
}
