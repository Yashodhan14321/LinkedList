#include<stdio.h>
#include<stdlib.h>
//LINKEDLIST STRUCTURE
struct list
{
	int data; //CARRY VALUES
	struct list *next; //CARRY ADDRESS OF THE NEXT NODE
};
int main()
{
	struct list *head = NULL;

	//INFINITE LOOP
	while(1)
	{
		printf("PRESS\n1. FOR ENTERING DATA IN LIST\n2. FOR DELETING A PARTICULAR VALUE FROM LIST\n3. PRINT LIST\n4. TO END\n");
		int d;
		scanf("%d", &d);
		if(d==1)
		{
			//INSERTION IN SINGLE LINKED LIST
			printf("ENTER DATA TO INSERT IN LIST\n");
			{
				int value;
				scanf("%d", &value);
				//ASSIGNING SPACE TO NEW NODE AT DIFFERENT LOCCATION IN THE MEMORY
				struct list *node = (struct list*)malloc(sizeof(struct list));
				node->data = value;
				node->next = head;
				head = node;
			}
		}
		if(d==2)
		{
			//DELETION IN SINGLE LINKED LIST
			printf("ENTER VALUE TO BE DELETED FROM THE LIST\n");
			int value;
			scanf("%d", &value);
			struct list *pt = head;
			struct list *ptr = pt;
			int c=0;
			while(pt!=NULL)
			{
				if(pt->data==value)
				{
					if(c==0)
					{
						head=head->next;
					}
					else
					{
						ptr->next= pt->next;
					}
				}
				ptr=pt;
				pt=pt->next;
				c++;
			}
			printf("SUCCESSFULLY DELETED : %d\n", value);
		}
		if(d==3)
		{
			//PRINTING OF LINKED LIST
			printf("YOUR LIST IS \n");
			struct list *pt = head;
			while(pt!=NULL)
			{
				printf("%d ", pt->data);
				pt=pt->next;
			}
			printf("\n");
		}
		if(d==4)
		{
			//ENDING THE INFINITE LOOP AND PROGRAM
			printf("ENDING SINGLE LINKED LIST PROGRAM ....");
			break;
		}
	}
	return 0;
}