/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:29:16 by egiles            #+#    #+#             */
/*   Updated: 2019/08/14 20:22:25 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);

#endif
