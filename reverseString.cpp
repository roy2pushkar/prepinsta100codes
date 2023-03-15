#include <iostream>

using namespace std;
string reverseWord(string str , int n){

  //Your code here
  //int n=str.length();
  int st=0;
  int end=n-1;
  while(st<=end){
      swap(str[st++],str[end--]);
  }
  return str;

}

int main()
{   int n;
    cin>>n;
    string str;
    cin>>str;
    cout<<reverseWord(str , n)<<endl;

    return 0;
}
