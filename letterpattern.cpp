/*Enter row number :
5
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter row number :"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		char ch='A';
		for(j=1;j<=n-i+1;j++)
		{
			
			cout<<ch;
			ch++;
			
			
		}
		ch-=1;
		
		for(j=1;j<=n-i+1;j++)
		{
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}
}
