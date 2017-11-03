#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void insert(int);
void print(void);

struct node* head;

int main()
{
	head=NULL;
	int no,i;
	printf("how many nos?\n");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		int x;
		printf("Enter a no: ");
		scanf("%d",&x);
		insert(x);
		print();
	}
			
	return 0;
}
void insert(int no)
{
	node* temp=(node*) malloc(sizeof(node));
	temp->data=no;
	(*temp).next=head;
	head=temp;
	
}
void print()
{
	struct node* temp=head;
	printf("List is---    ");
	while(temp!=NULL)
	{
	//	temp=temp->next;
		printf("%d   ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
