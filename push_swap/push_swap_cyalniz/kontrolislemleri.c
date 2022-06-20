#include "header.h"
void ft_stack_print(t_struct *structA)
{
	//printf("test");
	while(structA)
	{
		printf("%d ", structA->value);
		structA = structA->next;
	}
	printf("\n \n");
}