#include<iostream>
using namespace std;
int main()
{
	float cp, sp;
	cout<<"enter cp & sp"<<endl;
	cin>>cp>>sp;
	if(cp>sp)
	{
		cout<<"Loss of "<<100* ((cp-sp)/cp)<<" %"<<endl;
	}
	if(sp>cp)
	{
		cout<<"Profit of "<<100 * ((sp-cp)/cp)<<" %"<<endl;
	}
	else
	cout<<"No profit no loss"<<endl;
	return 0;
	
}
