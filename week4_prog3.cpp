#include<iostream>
using namespace std;
int main()
{
	int m;
	cout<<"enter m";
	cin>>m;
	int a[m];
	int e=0, o=0, p=0, n=0;
	cout<<"enter elements";
	for(int i=0;i<m;i++)
	{ 
	cin>>a[i];
	if(a[i]>0)
	p++;
	if(a[i]<0)
	n++;
	if(a[i]%2==0)
	e++;
	if(a[i]%2!=0)
	o++;
	}
	cout<<endl<<"No. of even no: "<<e<<endl;
	cout<<"No. of odd no: "<<o<<endl;
	cout<<"No. of negative no: "<<n<<endl;
	cout<<"No. of positive no: "<<p<<endl;
	return 0;
}

