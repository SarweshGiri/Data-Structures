#include<iostream>
using namespace std;
struct node
{
	int data;
	node *ptr;
};
 main()
{
	typedef struct node NODE;
	NODE *first,*head,*temp;
	int c=0,p=0;
	char choice;
	first=NULL;
	do{
		head=new NODE;
		cout<<"Enter the data item ";
		cin>>head->data;
		if(first!=NULL)
		{
			temp->ptr=head;
			temp=head;
		}
		else
		{
			first=temp=head;
		}
		cout<<"Do you want to enter more? ";
		cin>>choice;
	}
	while((choice=='y'||choice=='Y'));
	temp->ptr=NULL;
	head=first;
while(head!=NULL)
{
	c=c+head->data;
	cout<<head->data<<" ";
	head=head->ptr;
	p++;
}
cout<<"\nTotal sum: "<<c;
	cout<<"\nTotal node: "<<p;
}
