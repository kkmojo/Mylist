#include <stdio.h>
#include "list.h"

int command_line();

int main(void)
{
   int command = command_line();
   int index;
   TYPE val;
   TYPE result;
   List *list = NULL;
   while(command != 7)
   {	
   		switch(command)
   		{
   			case 1:
   				list = createList();
   				printf("List crate successful!\n"); 
   				break;
   			case 2:
	   			printf("Please enter the value: ");
	   			scanf("%d", &val);
	   			listAdd(list, val);
	   			printf("\nlist add successful!\n");
	   			break;
   			case 3:
	   			printf("Enter the index you want to Remove: ");
	   			scanf("%d", &index); 
	   			listRemove(list, index);
	   			printf("\nList Remove successful!\n");
	   			break;
   			case 4:
	   			printf("Enter the index you want to get: ");
		   		scanf("%d", &index); 
		   		result = listGet(list, index);
		   		printf("%d\n", result); 
	   			break;
   			case 5:
	   			printf("Please eneter the value: ");
	   			scanf("%d", &val);
	   			printf("\nPlease enter the index you want to insert: ");
	   			scanf("%d", &index);
	   			listInsert(list, val, index);
	   			printf("\nvalue insert successful!\n");
	   			break;
   			case 6:
	   			destoryList(list);
	   			printf("List delete successful!"); 
	   			break;
   			case 7:
   				break;
   			default:
   				printf("Wrong Comand! Enter Again!\n");
   		}

   		command = command_line();

   }

 return 0;
}


int command_line()
{
	int command;
	printf("1. Create List\n2. Add\n3. Remove\n4. Get\n5. Insert\n6. Delete\n7. Exit");
	scanf("%d", &command);
	return command;
}