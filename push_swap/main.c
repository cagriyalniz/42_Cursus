#include "header.h"

int	main(int ac, char **av)
{
	int		check;
	t_stack	*stackA;
	t_stack	*stackB;
	

	if (ac > 1)
	{
		check = isStackNumber(&av[1]);
		if(check == -1)
		{
			errorMessage();
			return 0;
		}
	stackA = stack_arr(&av[1]);

	printStack(stackA);
	printf("\n");
	printf("max: %d \n", ft_find_max(stackA));
	printf("min: %d", ft_find_min(stackA));
	if(ac == 4)
	{
		ft_three_four(stackA);
	}

	//temp = mStack;
//	printStack(stackA);
/* 	if (ac == 3)
	{
		
	} */
	}
	else
		errorMessage();
}