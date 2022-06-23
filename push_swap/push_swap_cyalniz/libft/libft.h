/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:28:59 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/23 16:14:57 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_struct
{
	int				value;
	int				index;
	struct s_struct	*next;
	//struct t_stack	*prev;
	
}t_struct;

//is
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
bool		ft_isdigit(int c);
int			t_isprint(int c);

//to
int		ft_atoi(const char *ch);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_itoa(int n);

//mem
void	ft_bzero(void *ch, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int ch, size_t count);

//str
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);

//put
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//bonus
t_struct	*ft_lstnew(int value);
void	ft_lstadd_front(t_struct **lst, t_struct *new);
int		ft_lstsize(t_struct *lst);
t_struct	*ft_lstlast(t_struct *lst);
void	ft_lstadd_back(t_struct **lst, t_struct *new);
void	ft_lstdelone(t_struct *lst, void (*del)(int));
void	ft_lstclear(t_struct **lst, void (*del)(int));
void	ft_lstiter(t_struct *lst, void (*f)(int));
t_struct	*ft_lstmap(t_struct *lst, int(*f)(int), void (*del)(int));

#endif
