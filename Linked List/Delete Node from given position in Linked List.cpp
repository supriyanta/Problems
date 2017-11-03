#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Delete(Node* head,int position);
void print(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<endl;
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
	head=insert(head,2);   //    2
	head=insert(head,25);  //    25
    head=insert(head,14);  //    14
	head=insert(head,29);  //    29
	head=insert(head,16);  //    16
	head=insert(head,82);  //    82
	head=insert(head,15);  //    15
	head=insert(head,21);  //    21
	print(head);
	head=Delete(head,3);
	print(head);
	head=Delete(head,0);
	print(head);
	head=Delete(head,5);
	print(head);
	
	return 0;
}
Node* Delete(Node* head,int position)
{
	Node* temp=head;
	if(position==0)
	{
		head=temp->next;
		free(temp);
		return head;
	}	
	for(int i=1;i<position;i++)
  {
      temp=temp->next;          
  }
  Node* temp1=temp->next; //use this temp1 variable to free the memory of deleted node
  
  temp->next=temp->next->next;
  free(temp1);  //after deleting time to free temp1
  return head;
	
}
