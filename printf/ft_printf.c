/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 01:58:28 by elise             #+#    #+#             */
/*   Updated: 2026/09/14 02:10:59 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(char const *str,...)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (str[i])
	{
		if(str[i] == '%' && str[i + 1] != '%')
		{
			i++;
			count++;
			if (str[i] == 'd')
				decimal_printf();
		}
		i++;
	}
}

int main(void)
{
	int nb = 5;

	ft_printf("test de %%d: %d\n", nb);
	printf("test de %%d: %d\n", nb);
	return
}