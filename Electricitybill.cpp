#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the unit:"<<endl;
	int un;
	cin>>un;
	int bill=0;
	int cost;
	if(un<=100)
	{
		bill=0;
		cout<<"No chargest to be paid."<<bill<<endl;
	}
	else if(un<=200)
	{
		
		bill=0+(un-100)*5;
		cout<<"Your total bill is:"<<bill<<endl;
	}
	else if(un<=300)
	{
		bill=0+100*5+(un-200)*10;
		cout<<"Your total bill is:"<<bill<<endl;
	}
	else
	{
		bill=0+100*5+100*10+(un-300)*12;
		cout<<"Your total bill is: "<<bill<<endl;
	}

}
