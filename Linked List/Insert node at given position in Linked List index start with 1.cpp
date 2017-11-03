#include<iostream>
#include<cstdlib>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void print(Node*);
Node* insert(Node* head,int data,int n)
{
	Node* temp=(Node*)malloc(sizeof(Node));
	temp->data=data;
	temp->next=NULL;
	
	if(n==1)
	{
		temp->next=head;
		head=temp;
		return head;
	}
	Node* temp1=head;
	for(int i=1;i<n-1;i++)
	{
		temp1=temp1->next;
	}
	temp->next=temp1->next;
	temp1->next=temp;
	return head;
}
int main()
{
	Node* head=NULL;
	head=insert(head,2,1);  // 2
	head=insert(head,9,1);  // 9 2
	head=insert(head,4,2);  // 9 4 2
	head=insert(head,5,4);  // 9 4 2 5
	print(head);
	return 0;
}
void print(Node* temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}
