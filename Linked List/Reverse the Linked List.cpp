#include<iostream>
#include <cstdlib>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* insert(Node* head,int position,int value)
{
	Node* temp=head;
	Node* ne=(Node*)malloc(sizeof(Node));
	ne->data=value;
	ne->next=NULL;
	if(position==0)
	{
		ne->next=head;
		head=ne;
		return head;
	}
	Node* prev = NULL;
	for(int i=0;i<position;i++)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=ne;
	ne->next=temp;
	return head;
	
}
Node* reverse(Node* head)
{
	Node* temp=head;
	Node* prev=NULL;
	Node* after=head;
//	cout<<endl<<after->data<<endl;
	//cout<<"\nenter in reverse\n";

	while(temp!=NULL)
	{
		after=after->next;
		temp->next=prev;
		prev=temp;
		temp=after;
	}
	head=prev;
	//(head==NULL)?cout<<"null\n": cout<<"not null\n";
	return head;
}
void print(Node* head)
{
	//cout<<"enter in print\n";
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
	cout<<endl<<endl;
	//cout<<"\nexiting print"<<endl;
}

int main()
{
	Node* head=NULL;
	
	head=insert(head,0,2);  
	head=insert(head,1,5); 
	head=insert(head,2,9); 
	head=insert(head,0,1);
	head=insert(head,2,4);
	head=insert(head,4,6);
	head=insert(head,2,3);
	head=insert(head,6,8);
	head=insert(head,6,7);
	
	print(head);
	
	head=reverse(head);
	//cout<<"return from reverse"<<endl;
	print(head);
	
	return 0;
}
