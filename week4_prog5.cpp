    
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	int a[n];
	int no, count=0;
	cout<<"enter the no. to count ";
	cin>>no;
	cout<<"occurences of above no";
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	if(a[i]==no)
	count++;
}
cout<<" no. of occurences are :"<<count;
return 0;}
