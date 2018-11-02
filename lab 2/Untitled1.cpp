#include<iostream>
using namespace std;
typedef struct
{
	char areacode[4];
	char exchange[4];
	char number[5];
}phone;
int main()
{
	phone x,y;
	cout<<"Enter your areacode, exchange, number:";
	/*for(int i=0;i<3;i++ )
	{
		cin>>x.areacode>>x.exchange;
	}
	for(int i=0;i<4;i++)
	{
		cin>>x.number;
	}
	for(int i=0;i<4;i++)
	{
		cout<<x.areacode<<x.exchange<<"-"<<x.number;
	}*/
	cin>>x.areacode>>x.exchange>>x.number;
	cin>>y.areacode>>y.exchange>>y.number;
	cout<<"My number is:"<<"("<<x.areacode<<")"<<x.exchange<<"-"<<x.number;
	cout<<endl;
	cout<<"Your phone number is:"<<"("<<y.areacode<<")"<<y.exchange<<"-"<<y.number;
}
