/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoo <hyyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:32:05 by hyyoo             #+#    #+#             */
/*   Updated: 2022/07/12 23:44:56 by hyyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;
	size_t				i;

	i = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (const unsigned char *)src;
	if (tmp_dst <= tmp_src)
		while (len--)
			tmp_dst[i++] = tmp_src[i++];
	else
	{
		tmp_dst += (len - 1);
		tmp_src += (len - 1);
		while (len--)
		{
			tmp_dst[i] = tmp_src[i];
			i--;
		}
	}
	return (dst);
}