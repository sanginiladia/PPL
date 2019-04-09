#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter 3 digit no. ";
	cin>>a;
	int sum=0;
	while(a!=0)
	{
		int digit=a%10;
		sum= sum + digit;
		a=a/10;
	}
	cout<<"\nsum of the digits are : "<<abs(sum);
	return 0;
}
