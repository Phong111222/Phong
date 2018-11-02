#include<iostream>
using namespace std;
typedef struct
{
	int a;
	int b;
}fraction;

void Input(fraction &x)
{
	cout<<"nhap vao tu so: ";
	cin>>x.a;
	cout<<"nhap vao mau so: ";
	cin>>x.b;
	if(x.b==0)
	{
		do
		{
			cout<<"vui long nhap lai mau so: ";
			cin>>x.b;
		}while(x.b==0);
	}
	
}
fraction add(fraction x,fraction y)
{
	fraction c;
	c.a=x.a*y.b+y.a*x.b;
	c.b=x.b*y.b;
	cout<<c.a<<"/"<<c.b;	
}
fraction sub(fraction x,fraction y)
{
	fraction c;
	c.a=x.a*y.b-y.a*x.b;
	c.b=x.b*y.b;
	cout<<c.a<<"/"<<c.b;
}
fraction mul(fraction x, fraction y)
{
	fraction c;
	c.a=x.a*y.a;
	c.b=x.b*y.b;
	cout<<c.a<<"/"<<c.b;
}
fraction div(fraction x, fraction y)
{
	fraction c;
	c.a=x.a*y.b;
	c.b=x.b*y.a;
	cout<<c.a<<"/"<<c.b;
}
int main()
{
	fraction x,y;
	Input(x);
	Input(y);
	sub(x,y);
}
