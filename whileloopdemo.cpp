#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter total number :"<<endl;
	cin>>n;
	int number;
	int i=1;
	while(i<=n)
	{
		cin>>number;
		sum+=number;
		i++;
	}
	cout<<"Sum is "<<sum;
}
