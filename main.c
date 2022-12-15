/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:05:10 by eblondee          #+#    #+#             */
/*   Updated: 2022/07/26 17:43:21 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lstdc.h"

/*int	main(void)
{
	int		i = 0;
	int		*nombres;
	t_lstdc	*test;

	nombres = malloc(sizeof(int) * 5);
	while (i < 5)
	{
		nombres[i] = (i + 1) * 2;
		i++;
	}
	test = ft_create_int_lstdc(5, nombres);
	ft_check_print(&test,'i');
	ft_free_lstdc(&test);
	free(nombres);
}*/

/*int	main(void)
{
	int		i = 0;
	char	c = 'a';
	char	*lettres;
	t_lstdc	*test;

	lettres = malloc(sizeof(char) * 5);
	while (i < 5)
	{
		lettres[i] = c;
		i++;
		c++;
	}
	test = ft_create_char_lstdc(lettres, 5);
	ft_add_char(&test, 'c', -1);
	c = ft_get_char(&test, 3);
	ft_check_print(&test,'c');
	free(lettres);
	ft_free_lstdc(&test);
	printf("%c", c);
}*/

int	main(void)
{
	char	*mots[5] = {"Coucou", "Salut", "Bonjour", "Ahoy", "Yop"};
	t_lstdc	*test;
	t_lstdc	*try;
	
	test = ft_create_str_lstdc(mots, 4);
	try = ft_create_str_lstdc(mots+4, 1);
	ft_check_print(&try, 's');
	ft_check_print(&test, 's');
	ft_add_elem(&test, try, 0);
	ft_check_print(&test, 's');
	ft_free_lstdc(&test);
}

/*int	main(int argc, char **argv)
{
	t_lstdc	*test;
	char	try[5] = {"Hello"};
	
	argv++;
	test = ft_create_str_lstdc(argv, argc - 1);
	ft_check_print(&test,'s');
	ft_add_index(&test, &try, 3);
//	ft_add_str(&test, mots[4], -1);
	ft_check_print(&test, 's');
	ft_free_lstdc(&test);
}*/
