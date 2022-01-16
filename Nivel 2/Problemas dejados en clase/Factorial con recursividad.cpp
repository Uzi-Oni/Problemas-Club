#include<iostream>
using namespace std;

long fact(int);
int main()
{
  int n;
  cin >> n;
  cout << fact(n) << endl;

  return 0;
}

long fact(int num) 
{
  if(num == 0) 
     return 1;
  else 
     return num*fact(num-1);
}