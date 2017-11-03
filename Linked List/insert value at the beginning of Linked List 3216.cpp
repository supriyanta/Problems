#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	node* next;
};
node* head=NULL;

void print(void);
void insert(int);
int main()
{
	int t;
	cout<<"How many numbers?  ";
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int x;
		cout<<"Enter value: ";
		cin>>x;
		insert(x);
		print();
	}
	return 0;
}
void print()
{
	node* temp=head;
	cout<<"List:: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<endl;
}
void insert(int x)
{
	node* temp=(node*)malloc(sizeof(node));
	(*temp).data=x;
	(*temp).next=head;
	head=temp;
}
