#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t\tCalculator"<<endl;
	cout<<"Choose 1 for addition\nchoose 2 for subtraction\nchoose 3 for division\nchoose 4 for multiplication"<<endl;
    int ch;
    int sum=0;
	cout<<"Enter your choice :";
	cin>>ch;
	cout<<"Enter values of a and b: ";
	int a,b;
	cin>>a>>b;
	switch(ch)
	{
		case 1:
			
			sum=a+b;
			cout<<"Sum is "<<sum<<endl;
			break;
	    case 2:
	    	
			sum=a-b;
			cout<<"Subtraction is "<<sum<<endl;
			break;
	    case 3:
	    	float div;
			div=float(a)/float(b);
			cout<<"Division is "<<div<<endl;
			break;
	    case 4:
		    long int mul;
			sum=a*b;
			cout<<"Multiplication is "<<sum<<endl;
			break;		
	default:
		 cout<<"Choose a valid choice :"<<endl;
	}	
	
}
