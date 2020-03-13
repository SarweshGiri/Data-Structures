#include<iostream>
using namespace std;
struct node
{
	int data;
	node *ptr;
};
void tra();
void delete_start();
typedef struct node NODE;
	NODE *first,*head,*temp;

 main()
{
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
tra();
delete_start();
tra();
}
void tra()
{

	head=first;
while(head!=NULL)
{

	cout<<head->data<<" ";
	head=head->ptr;
}}

void delete_start()
{
char i;
NODE *q;
if(first==NULL)
return;
i=first->data;
q=first->ptr;
delete(first);
first=q;
//cout<<"Deleted information: "<<i;
}

