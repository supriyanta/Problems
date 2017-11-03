#include<iostream>
#include<cstdlib>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void print(Node*);
Node* InsertNth(Node* head,int data,int n)
{
    Node* temp=(Node*)malloc(sizeof(Node));
	temp->data=data;
	temp->next=NULL;
	
	if(n==0)
	{
		temp->next=head;
		head=temp;
		return head;
	}
	Node* temp1=head;
	for(int i=1;i<n;i++)
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
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int data,no;
		scanf("%d %d",&data,&no);
		head=insert(head,data,no);
		print(head);	
		cout<<endl;
	}
	
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
