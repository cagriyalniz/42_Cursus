#include "header.h"

void	ft_putStr(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	errorMessage()
{
	ft_putStr("argument error!");
}

void	printStack(t_stack *myStack)
{
	t_stack *head;
	
	//printf("test");
	head = myStack;
	while(head)
	{
		//printf("%p :", head->next);
		//printf("%d \n", head->value);
		ft_putnbr_fd(head->value, 1);
		ft_putchar_fd(' ', 1);
		head = head->next;
	}

}