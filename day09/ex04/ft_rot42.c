/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 20:31:17 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/13 23:33:18 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'A' + ((str[i] - 'A' + 42) % 26);
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'a' + ((str[i] - 'a' + 42) % 26);
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
