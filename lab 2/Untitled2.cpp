#include<iostream>
using namespace std;
double Money(double A,int n, float r);
int main()
{
	long A;
	float r;
	int n;
	cout<<"enter initial amount:";
	cin>>A;
	cout<<"enter amount of years:";
	cin>>n;
	cout<<"enter interest rate(percent per year):";
	cin>>r;
	cout<<"At the end of "<<n<<"years: "<<Money(A,n,r);
}
double Money( double  A, int n, float r)
{
	
	double c=1+(r/100),P=1;
	for(int i=1;i<=n;i++)
	{
		P=P*c;
	}
	double S=A*P;
	return S;
}
