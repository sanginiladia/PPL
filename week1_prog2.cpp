#include <iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter 2 numbers: ";
	cin>>n1>>n2;
	while(n2>0)
	{
		n1++;
		n2--;
	}
	cout<<"sum is:"<<n1;
	return 0;}
