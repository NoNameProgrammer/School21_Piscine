/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:42:05 by egiles            #+#    #+#             */
/*   Updated: 2019/08/18 22:18:45 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

typedef struct		s_numb
{
	struct s_numb	*next;
	int				*data;
}					t_numb;

struct s_numb		*numb_top;

typedef struct		s_oper
{
	struct s_oper	*next;
	char			*data;
}					t_oper;

struct s_oper		*oper_top;

void 				ft_putchar(char c);
void				ft_putnbr(int nb);
int					ft_calculate(int a, int b, char oper);
int					ft_precedence(char oper);
int					ft_check_operand(int i, char **str);
int					ft_check_stack_oper(void);
int					ft_input(char **str);
int					ft_translate(int i, char **str);
int					ft_check_operand(int i, char **str);
struct    s_numb				*ft_create_numb_top(void);
void 				ft_push_numb_top(int i);
int					ft_pop_top_numb(void);
int					ft_get_top_numb(void);
struct    s_oper				*ft_create_oper_top(void);
void 				ft_push_oper_top(char c);
void				ft_pop_top_oper(void);
char				ft_get_top_oper(void);
void				ft_stack_calculate(void);
int					eval_expr(char *str);

#endif
