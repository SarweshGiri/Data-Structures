#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n;
	cout<<"Enter the no of elements: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cin>>a[i];
	}
	cout<<"Traversing of the array is: \n";
	for(i=1;i<=n;i++)
	{
	cout<<a[i]<<endl;
	}
	return 0;
}
