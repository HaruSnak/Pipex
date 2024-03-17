/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmoreno <shmoreno@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:09:12 by shmoreno          #+#    #+#             */
/*   Updated: 2024/03/17 19:13:32 by shmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

// Function used to open files and duplicate file descriptors
// in order to redirect the input and output of commands.
void	ft_open_file(char **argv, t_pipex *pipex,
	int flag_open, int flag_dup)
{
	int	verif;
	int	reverse_flag;

	if (flag_dup == STDIN_FILENO)
	{
		reverse_flag = STDOUT_FILENO;
		verif = access(argv[1], F_OK);
		ft_errors(verif);
		pipex->file_source = open(argv[1], flag_open);
		ft_errors(pipex->file_source);
		ft_errors(dup2(pipex->file_source, flag_dup));
		ft_errors(dup2(pipex->pipe[1], reverse_flag));
		close(pipex->file_source);
	}
	else if (flag_dup == STDOUT_FILENO)
	{
		reverse_flag = STDIN_FILENO;
		pipex->file_dest = open(argv[4], flag_open, 0666);
		ft_errors(pipex->file_dest);
		ft_errors(dup2(pipex->file_dest, flag_dup));
		ft_errors(dup2(pipex->pipe[0], reverse_flag));
		close(pipex->file_dest);
	}
}

// Function used to create a child process for the first command.
void	ft_children1(char **argv, char **envp, t_pipex *pipex)
{
	pipe(pipex->pipe);
	pipex->children1 = fork();
	if (pipex->children1 == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (pipex->children1 == 0)
	{
		ft_open_file(argv, pipex, O_RDONLY, STDIN_FILENO);
		close(pipex->pipe[0]);
		ft_execve(argv + 2, envp);
	}
}

// Function used to create a child process for the second command.
void	ft_children2(char **argv, char **envp, t_pipex *pipex)
{
	pipex->children2 = fork();
	if (pipex->children2 == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (pipex->children2 == 0)
	{
		ft_open_file(argv, pipex, O_TRUNC | O_CREAT | O_RDWR, STDOUT_FILENO);
		close(pipex->pipe[1]);
		ft_execve(argv + 3, envp);
	}
	else
	{
		close(pipex->pipe[0]);
		close(pipex->pipe[1]);
		waitpid(pipex->children2, NULL, 0);
	}
}

int	main(int argc, char **argv, char **envp)
{
	t_pipex	pipex;

	if (argc != 5)
	{
		write(2, "Error: wrong number of arguments\n", 33);
		exit(EXIT_FAILURE);
	}
	ft_children1(argv, envp, &pipex);
	ft_children2(argv, envp, &pipex);
	return (0);
}
