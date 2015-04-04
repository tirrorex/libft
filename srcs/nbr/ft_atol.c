#include "libft.h"

long long		ft_atol(const char *str)
{
	long long		total;
	int		sign;

	sign = 1;
	total = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\f'
			|| *str == '\v' || *str == '\n')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + (*str - '0');
		str++;
	}
	total = total * sign;
	return (total);
}