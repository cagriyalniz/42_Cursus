#ifndef HEADER_H
#define HEADER_H


#include "./libft/libft.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
	struct s_stack	*prev;
	
}	t_stack;

typedef struct s_mainstack
{
	struct s_stack *a_stack;
	struct s_stack *b_stack;

}	t_mainstack;


//operations

void	swapA();
void	pushA();
void	rotateA();
void	revRotateA();

void	swapB();
void	pushB();
void	rotateB();
void	revRotateB();

void	sS();
void	rotRot();
void	revRotRot();

//utils

void	errorMessage();
void	ft_putStr(char *s);
void	printStack(t_stack *mStack);
int		ft_find_max(t_stack *myStack);
int		ft_find_min(t_stack *myStack);

//checks

int 	isStackNumber(char **n);
t_stack	*stack_arr(char **n);
t_stack	*stack_new(int nmbr);
void	stack_append(t_stack **temp, t_stack *new);
t_stack *stack_last(t_stack *temp);

# endif