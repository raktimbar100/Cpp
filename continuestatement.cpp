#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	int i=1;
	while(i<=n)
	{
		if(i%2==0)
		{
			cout<<i<<"-Even number"<<endl;
			i++;
			continue;
		}
		cout<<i<<"-Odd number "<<endl;
		i++;
	}
}
