/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmoreno <shmoreno@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:24:46 by shmoreno          #+#    #+#             */
/*   Updated: 2024/03/02 20:43:57 by shmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include "libft/libft.h"

typedef struct s_pipex
{
	int		pipe[2];
	int		*status;
	int		file_source;
	int		file_dest;
	pid_t	children1;
	pid_t	children2;
}	t_pipex;

// ERRORS FUNCTIONS
void		ft_free_char(char **str);
void		ft_errors(int value);

// FIND PATH FUNCTIONS
void		ft_execve(char *argv[], char **envp);

#endif
