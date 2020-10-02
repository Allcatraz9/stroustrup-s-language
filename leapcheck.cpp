#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter year to check for leap year"<<"\n";
	int leap;cin>>leap;;;;
	
	if(leap%4==0)
	{
		if(leap%100==0)
		{
			cout<<"its leap year";
		}
		else{
			cout<<"Its a leap year"<<"\n";
		}
	}
	else{
		cout<<"Its not a leap year"<<"\n";
	}
}
