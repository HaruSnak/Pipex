/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmoreno <shmoreno@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:49:09 by shmoreno          #+#    #+#             */
/*   Updated: 2024/03/17 19:12:51 by shmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

// This function is used to find the path of a command
// as an array of strings.
char	**ft_path(char **envp)
{
	int		i;
	char	*path;
	char	**path_f;

	i = 0;
	while (envp[i] != NULL)
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
		{
			path = ft_strjoin(envp[i] + 5, "/usr/bin:/bin");
			break ;
		}
		i++;
	}
	path_f = ft_split(path, ':');
	free(path);
	return (path_f);
}

// This function is used to execute a command.
// Taking the paths found by ft_path,
// it executes the command passed as a parameter.
void	ft_execve(char *argv[], char **envp)
{
	int		i;
	char	**path;
	char	**cmd_extract;
	char	*cmd_path;

	i = 0;
	path = ft_path(envp);
	cmd_extract = ft_split(argv[0], ' ');
	while (path[i] != NULL)
	{
		cmd_path = ft_strjoin(path[i], "/");
		cmd_path = ft_strjoin(cmd_path, cmd_extract[0]);
		if (access(cmd_path, F_OK) == 0)
		{
			execve(cmd_path, cmd_extract, envp);
			free(cmd_path);
			break ;
		}
		free(cmd_path);
		i++;
	}
	ft_free_char(cmd_extract);
	ft_free_char(path);
}
