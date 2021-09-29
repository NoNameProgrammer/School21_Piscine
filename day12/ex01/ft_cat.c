/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:31:25 by egiles            #+#    #+#             */
/*   Updated: 2019/08/15 19:44:00 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

int    main(int argc, char **argv)
{
    int		fd;
    char	buf[1];
    
    if (argc == 1)
	{
        write(1, "File name missing.\n", 19);
        return (1);
	}
    if (argc > 2)
	{
        write(1, "Too many arguments.\n", 20);
        return (1);
	}
    fd = open(argv[1], O_RDONLY);
	while (read(fd, buf, 1))
		write(1, buf, 1);
	close(fd);
	return (0);
}
