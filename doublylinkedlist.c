#include<stdio.h>
#include<stdlib.h>
struct doubly
{
	int data;
	struct doubly *next;
	struct doubly *prev;
};
int main()
{
	struct doubly *head = NULL;

	while(1)
	{
		printf("PRESS\n1. ELEMENT IN FRONT\n2. ELEMENT IN BACK\n3. PRINT LIST\n4. INSERT AFTER A NUMBER\n5. END\n");
		int d;
		scanf("%d", &d);
		if(d==1)
		{
			printf("ENTER ELEMENT TO BE INSERTED IN FRONT\n");
			int value;
			scanf("%d", &value);
			struct doubly *newnode = (struct doubly*)malloc(sizeof(struct doubly));
			newnode->data = value;
			newnode->next = head;
			newnode->prev = NULL;
			if(head!=NULL)
			{
				head->prev = newnode;
			}
			head = newnode;
		}
		if(d==2)
		{
			printf("ENTER ELEMENT TO BE INSERTED IN FRONT\n");
			int value;
			scanf("%d", &value);
			struct doubly *newnode = (struct doubly*)malloc(sizeof(struct doubly));
			if(head==NULL)
			{
				newnode->data = value;
				newnode->next = head;
				newnode->prev = NULL;
				if(head!=NULL)
				{
					head->prev = newnode;
				}
				head = newnode;
			}
			else
			{
				struct doubly *pt = head;
				while(pt->next!=NULL)
				{
					pt=pt->next;
				}
				newnode->data = value;
				newnode->next = NULL;
				newnode->prev = pt;
				pt->next = newnode;
			}
		}
		if(d==3)
		{
			struct doubly *pt = head;
			struct doubly *ptr = head;
			while(pt!=NULL)
			{
				printf("%d ", pt->data);
				pt =pt->next;
				if(pt!=NULL)
				{
					ptr = ptr->next;
				}
			}
			printf("\n");
			while(ptr!=NULL)
			{
				printf("%d ",ptr->data);
				ptr= ptr->prev;
			}
			printf("\n");
		}
		if(d==4)
		{
			printf("ENTER ELEMENT TO INSERT\n");
			int num;
			scanf("%d",&num);
			printf("ENTER ELEMENT BEFORE THE PLACE OF INSERTION\n");
			int value;
			scanf("%d",&value);
			struct doubly *pt = head;
			while(pt!=NULL)
			{
				if(pt->data==value)
				{
					if(pt->next==NULL)
					{
						struct doubly *newnode = (struct doubly*)malloc(sizeof(struct doubly));
						newnode->data = num;
						newnode->next = pt->next;
						pt->next=newnode;
						newnode->prev = pt;
					}
					else
					{
						struct doubly *newnode = (struct doubly*)malloc(sizeof(struct doubly));
						newnode->data = num;
						(pt->next)->prev = newnode;
						newnode->next = pt->next;
						newnode->prev = pt;
						pt->next = newnode;
					}
				}
				pt=pt->next;
			}
		}
		if(d==5)
		{
			break;
		}
	}
}