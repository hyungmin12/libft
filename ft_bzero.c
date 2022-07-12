/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoo <hyyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:09:28 by hyyoo             #+#    #+#             */
/*   Updated: 2022/07/12 22:14:27 by hyyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)p;
	while (i < n)
	{
		mem[i] = 0;
		i++;
	}
	return ;
}
