#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void print(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}

Node* insert(Node* head,int x)
{
	//cout<<"x="<<x<<endl;
	Node* temp=(Node*)malloc(sizeof(Node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		//cout<<"Head=NULL"<<endl;
		head=temp;
		return head;
	}
	Node* temp1=head;
	int i=0;
	while(temp1->next!=NULL)
	{
		//cout<<"Head not NULL"<<endl;
		temp1=temp1->next;
		i++;
	}
//	cout<<i<<endl;
	temp1->next=temp;
	return head;
}

int main()
{
	Node* head=NULL;
	head=insert(head,2);

	head=insert(head,25);
    head=insert(head,14);
	head=insert(head,25);
	head=insert(head,14);
	head=insert(head,8);
	print(head);
	return 0;
}
