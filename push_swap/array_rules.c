/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:29:22 by cyalniz           #+#    #+#             */
/*   Updated: 2022/05/10 10:55:56 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Online C compiler to run C program online
#include <stdio.h>

void aryaz(int *ar, int l)
{
    int i = 0;
    while(i < l)
    {
        printf("%d \n", ar[i]);
        i++;
    }
    printf("\n");
}

int	*sa(int *a, int l)
{
    int	tmp;
	
    tmp = a[0];
    a[0] = a[1];
    a[1] = tmp;
    printf("sa\n");
    
    return a;
}

int	*sb(int *b, int l)
{
    int	tmp;
	
    tmp = b[0];
    b[0] = b[1];
    b[1] = tmp;
    printf("sb\n");
    
    return b;
}

int	*ra(int *a, int l)
{
    int	i;
    int	tmp;

	i = 0;
    while(i < l - 1)
    {
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
        i++;
    }
    
    printf("ra\n");
    return a; 
}

int	*rb(int *b, int l)
{
    int	i;
    int	tmp;

	i = 0;
    while(i < l - 1)
    {
        tmp = b[i];
        b[i] = b[i + 1];
        b[i + 1] = tmp;
        i++;
    }
    
    printf("rb\n");
    return b; 
}

void rr(int *a, int *b, int la, int lb)
{
    //ra(a, la);
    //rb(b, lb);
    printf("\n***rr***\n");
   // printf("%s", getName(a));
    aryaz(ra(a, la), la);
    aryaz(rb(b, lb), lb);
}

int	*rra(int *a, int l)
{
    int	i;
    int	tmp;
	
	i = 0;
    while(i < l - 1)
    {
        tmp = a[l - 1];
        a[l - 1] = a[l - 2];
        a[l - 2] = tmp;
        l--;
    }
    
    printf("rra\n");
    return a;
}

int	*rrb(int *b, int l)
{
    int	i;
    int	tmp;
	
	i = 0;
    while(i < l - 1)
    {
        tmp = b[l - 1];
        b[l - 1] = b[l - 2];
        b[l - 2] = tmp;
        l--;
    }
    
    printf("rrb\n");
    return b;
}

int main() {
    int len = 4;
    int a[4] = {3, 5, 1, 2};
    int b[4];
    int i = 0;
    int j = 0;
    int temp = 0;
  
    while(i < len)
    {
        j = 0;
        while(j < i)
        {
            if(a[j] > a[i])
                {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            j++;
        }
        i++;
    }
    
    aryaz(a, len);
    aryaz(sa(a, 4), 4);
    aryaz(ra(a, 4), 4);
    aryaz(rra(a, 4), 4);
    return 0;
}