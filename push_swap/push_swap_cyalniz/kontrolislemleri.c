#include "header.h"
void ft_stack_print(t_struct *stackA)
{
	//printf("test");
	while(stackA)
	{
		printf("%d ", stackA->value);
		stackA = stackA->next;
	}
	printf("\n \n");
}