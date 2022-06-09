#include "header.h"

t_stack	*stack_new(int nmbr)//yeni eleman oluşturuyor
{
	t_stack	*tmp;

	tmp = malloc(sizeof(t_stack));
	tmp->value = nmbr;
	tmp->next = NULL;
	return (tmp);
}

t_stack *stack_last(t_stack *temp)//sondaki elemanı buluyor
{
	if(!temp)
		return temp;
	while(temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

void	stack_append(t_stack **temp, t_stack *new)//en sona eleman ekliyor
{
	t_stack *tab;

	if(!*temp)
	{
		*temp = new;
		return ;
	}
	tab = stack_last(*temp);
	tab->next = new;
}

t_stack	*stack_arr(char **n)
{
	//printf("test");
	int		i;
	t_stack	*tmp;
	tmp = NULL;
	i = 0;
	while(n[i])
	{
		stack_append(&tmp, stack_new(ft_atoi(n[i])));
		i++;
	}
	return (tmp);
}