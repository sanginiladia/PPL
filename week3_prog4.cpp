#include <iostream>
using namespace std;
int main()
{
  int n, num, rem, sum = 0;
  cout << "Enter n ";
  cin >> n;
  num = n;
  while(num != 0)
  {
      rem = num % 10;
      sum += rem * rem * rem;
      num /= 10;
  }
  if(sum == n)
    cout << n << " is an Armstrong no.";
  else
    cout << n << " is not an Armstrong no.";
  return 0;
}
