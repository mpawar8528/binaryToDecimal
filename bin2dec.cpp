#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,a[15],i,count,sum;
	i=count=sum=0;
	cout<<" Enter A BIANRY Number ";
	cin>>n;
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
		count++;
	
	}
	i=0;
	while(i<count)
	{
		sum=sum+(a[i]*pow(2,i));
		i++;
	}
	cout<<"DECIMAL EQUIVALENT = "<<sum;
}
