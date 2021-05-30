/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:19:07 by pvanderl          #+#    #+#             */
/*   Updated: 2021/05/30 12:16:14 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/*
** Useful macros
*/
# define DUP(s)				tmp = ft_strdup(s); printf("`%s` (`%s`)\n", tmp, s); free(tmp); tmp = NULL;

/*
** Function prototypes
*/
int		ft_strlen(char const *str);

int		ft_strcmp(char const *s1, char const *s2);

char	*ft_strcpy(char *dst, char const *src);

ssize_t	ft_write(int fd, void const *buf, size_t nbyte);

ssize_t	ft_read(int fd, void *buf, size_t nbyte);

char	*ft_strdup(char const *s1);

/*
** Start !
*/
int		main(void)
{
	int		i;
	int     size;
	long	r;
	char	buffer[100];
	char	*tmp;
	char	*a;
	char	*b;
// 	char	*tmp2;

	r = 0;
	i = 0;
	while (i < 100)
		buffer[i++] = 0;

	printf("strlen\n");
	tmp = "";
	printf("\t`%s` = %d (%d)\n", tmp, ft_strlen(tmp), (int)strlen(tmp));
	tmp = "toto";
	printf("\t`%s` = %d (%d)\n", tmp, ft_strlen(tmp), (int)strlen(tmp));
	tmp = "HEHEHEHE";
	printf("\t`%s` = %d (%d)\n", tmp, ft_strlen(tmp), (int)strlen(tmp));
	tmp = "J'aime 19! c'est une ecole de fous!";
	printf("\t`%s` = %d (%d)\n", tmp, ft_strlen(tmp), (int)strlen(tmp));
	tmp = "Ils sont fous ces codeurs";
	printf("\t`%s` = %d (%d)\n", tmp, ft_strlen(tmp), (int)strlen(tmp));
	tmp = "-1";
	printf("\t`%s` = %d (%d)\n", tmp, ft_strlen(tmp), (int)strlen(tmp));
	printf("OK\n");

	printf("\nstrcpy\n");
	printf("\t`%s` (`toto`)\n", ft_strcpy(buffer, "toto"));
	printf("\t`%s` (empty)\n", ft_strcpy(buffer, ""));
	printf("\t`%s` (`long message`)\n", ft_strcpy(buffer, "long message"));
	printf("\t`%s` (NULL)\n", ft_strcpy(buffer, NULL));
	printf("OK\n");


	printf("\nstrcmp\n");
	a = "toto";
	b = "toto";
	printf("\t`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));
	a = "";
	b = "toto";
	printf("\t`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));
	a = "toto";
	b = "";
	printf("\t`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));
	a = "toto";
	b = "toto Hey";
	printf("\t`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));
	printf("\t`%s`:`%s` = %d\n", "TOTO", (char *)NULL, ft_strcmp("TOTO", NULL));
	printf("\t`%s`:`%s` = %d\n", (char *)NULL, "TOTO", ft_strcmp(NULL, "TOTO"));
	printf("\t`%s`:`%s` = %d\n", (char *)NULL, (char *)NULL, ft_strcmp(NULL, NULL));
	printf("OK\n");


	printf("\nwrite\n");
	tmp = "toto";
	size = 4;
	printf("\t %zd (`%s`:%d)\n", ft_write(STDOUT_FILENO, tmp, size), tmp, size);
	tmp = "totototo";
	size = 4;
	printf("\t %zd (`%s`:%d)\n", ft_write(STDOUT_FILENO, tmp, size), tmp, size);
	tmp = "totototo";
	size = 8;
	printf("\t %zd (`%s`:%d)\n", ft_write(STDOUT_FILENO, tmp, size), tmp, size);
	tmp = "toto";
	size = 2;
	printf("\t %zd (`%s`:%d)\n", ft_write(STDOUT_FILENO, tmp, size), tmp, size);
	printf("OK\n");

	printf("\nread (Makefile)\n");
	i = ft_read(STDIN_FILENO, buffer, 50);
	printf("\t`%s`:%d\n", buffer, i);
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	i = ft_read(STDIN_FILENO, buffer, 25);
	printf("\t`%s`:%d\n", buffer, i);
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	i = ft_read(STDIN_FILENO, buffer, 4);
	printf("\t`%s`:%d\n", buffer, i);
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	i = ft_read(STDIN_FILENO, buffer, 26);
	printf("\t`%s`:%d\n", buffer, i);
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	i = ft_read(STDIN_FILENO, buffer, 14);
	printf("\t`%s`:%d\n", buffer, i);
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	i = ft_read(STDIN_FILENO, buffer, 0);
	printf("\t`%s`:%d\n", buffer, i);
	printf("OK\n");

	printf("\n--ft_strdup\n");
	tmp2 = ft_strdup("toto");
	DUP(tmp2)
	free(tmp2);
	DUP("totobar")
	DUP("long message")
	DUP("")
	DUP(NULL)
	printf("-done\n");*/

	return (0);
}