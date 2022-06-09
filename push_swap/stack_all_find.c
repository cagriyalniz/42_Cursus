#include "header.h"

int	ft_find_max(t_stack *myStack)
{

	int	max;

	max = -2147483648;
	t_stack *head;
	head = myStack;
	if(!head->value)
		return (0);
	while(head)
	{
		if(head->value > max)
			max = head->value;
		head = head->next;
	}
	return (max);
}

int	ft_find_min(t_stack *myStack)
{
	t_stack *head;
	int min;

	min = 2147483647;
	head = myStack;
	if(!head)
		return (0);
	while(head)
	{
		if(head->value < min)
			min = head->value;
		head = head->next;
	}
	return (min);
}