#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
};
int main()
{
	struct list *head = NULL;
	struct list *start = NULL;
	int len =0;
	while(1)
	{
		printf("PRESS\n1. FOR INSERTION AT BEGINING\n2. TO TRASVERSE\n3. INSERT AFTER\n4. INSERT AT END\n5. DELETION\n6. END\n");
		int d;
		scanf("%d", &d);
		if(d==1)
		{
			printf("ENTER THE VALUE TO BE INSERTED\n");
			int value;
			scanf("%d",&value);
			struct list *newnode = (struct list *)malloc(sizeof(struct list));
			newnode->data = value;
			newnode->next = head;
			if(head==NULL)
			{
				start = newnode;
			}
			head = newnode;
			start->next = head;
			len++;
		}
		if(d==2)
		{
			if(start == NULL)
			{
				printf("EMPTY LIST\n");
			}
			else
			{
				int k=len+1;
				struct list *ptr = head;
				while(ptr!=NULL)
				{
					printf("%d ", ptr->data);
					ptr=ptr->next;
					k--;
					if(k==0)
					{
						break;
					}
				}
				printf("\n");
			}
		}
		if(d==3)
		{
			printf("ENTER VALUE TO BE INSERTED\n");
			int value;
			scanf("%d",&value);
			printf("ENTER THE ELEMENT AFTER WHICH INSERTION IS NEEDED\n");
			int num;
			scanf("%d",&num);
			struct list *pt = head;
			len++;
			while(pt!=NULL)
			{
				if(pt->data == num)
				{
					struct list *newnode = (struct list*)malloc(sizeof(struct list));
					newnode->data = value;
					newnode->next = pt->next;
					pt->next = newnode;
					break;
				}
				pt=pt->next;
			}
		}
		if(d==4)
		{
			printf("ENTER VALUE TO BE INSERTED AT END\n");
			int value;
			scanf("%d",&value);
			struct list *newnode = (struct list*)malloc(sizeof(struct list));
			newnode->data = value;
			newnode->next = head;
			start->next = newnode;
			start = newnode;
			len++;
		}
		if(d==5)
		{
			printf("ENTER ELEMENT TO BE DELETED\n");
			int value;
			scanf("%d",&value);
			struct list *pt = head;
			printf("%d\n", start->data);
			if(start->data == value)
			{
				if(start->next == start)
				{
					start = NULL;
					head = NULL;
				}
				else
				{
					start =start->next;
				}
			}
			else
			{
				while(pt!=NULL)
				{
					if((pt->next)->data == value)
					{
						pt->next = (pt->next)->next;
						break;
					}
					pt=pt->next;
				}
			}
			len--;
		}
		if(d==6)
		{
			printf("ENDING PROGRAM");
			break;
		}
	}
}