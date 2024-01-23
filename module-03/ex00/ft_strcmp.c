/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungslee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:52:13 by jungslee          #+#    #+#             */
/*   Updated: 2023/08/31 18:10:59 by jungslee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	unsigned int	cnt1;
	unsigned int	cnt2;

	cnt1 = 0;
	cnt2 = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (tmp1[cnt1])
	{
		cnt1++;
	}
	while (tmp2[cnt2])
	{
		cnt2++;
	}
	if (cnt1 == cnt2)
		return (0);
	else if (cnt1 < cnt2)
		return (-1);
	else
		return (1);
}
