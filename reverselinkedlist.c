#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
};
struct list *reverse(struct list *node) 
{ 
     
} 
int main()
{
	struct list *head=NULL;
	while(1)
	{
		printf("PRESS\n1. FOR INSERTION\n2. FOR REVERSE USING RECURRSION\n3. FOR REVERSE USING ITERATIVE\n4. FOR REVERSE USING STACK\n5. FOR PRINTING\n6. END\n");
		int d;
		scanf("%d",&d);
		if(d==1)
		{
			printf("ENTER VALUE TO INSERT\n");
			int value;
			scanf("%d",&value);
			struct list *newnode = (struct list*)malloc(sizeof(struct list));
			newnode->data = value;
			newnode->next = head;
			head = newnode;
		}
		if(d==3)
		{
			struct list* prev = NULL; 
		    struct list* current = head; 
		    struct list* link = NULL; 
		    while (current != NULL) 
		    {
		        link = current->next; 
		        current->next = prev; 
		        prev = current; 
		        current = link; 
		    } 
		    head = prev; 
		}
		if(d==2)
		{
			reverse(head);	
		}
		if(d==5)
		{
			struct list *pt = head;
			while(pt!=NULL)
			{
				printf("%d ",pt->data);
				pt=pt->next;
			}
			printf("\n");
		}
		if(d==6)
		{
			printf("ENDING PROGRAM");
			break;
		}
	}
}