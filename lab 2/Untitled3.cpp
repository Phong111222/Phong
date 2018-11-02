#include<iostream>
using namespace std;
double Equivalent( double a,double b, char c)
{
	double x=0;
	cout<<"enter number 1: "; cin>>a;
	cout<<"enter number 2: "; cin>>b;
	cout<<"enter the operator: "; cin>>c;
	switch(c)
	{
		case '+':
			x=a+b;
			break;
		case '-':
			x=a-b;
			break;
		case '*':
			x=a*b;
			break;
		case '/':
			x=a/b;
			break;
	}
	cout<< x<<endl;
}
int main()
{
	double a,b;
	char c,d;
	do
	{
		Equivalent(a,b,c);
		cout<<"yes or no ";
		cin>>d;
	}
	while(d=='y');
	cout<<"the end";
}
