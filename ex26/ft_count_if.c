/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 19:48:36 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/22 19:48:38 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			b++;
		i++;
	}
	if (b > 0)
		return (b);
	else
		return (0);
}
