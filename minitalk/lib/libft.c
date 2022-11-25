#include "../minitalk.h"

int	parse_int(char *pid)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (pid && pid[i] >= 48 && pid[i] <= 57)
	{
		if (pid[i] <= 47 || pid[i] > 57)
			return (0);
		num = (num * 10) + (pid[i] - 48);
		i++;
	}
	return (num);
}

/**
 * Mago ezeq
 * Checks signal direct in function
 */
char	*ft_convert(int n, char *str)
{
	if (n < -9 || n > 9)
		str = ft_convert(n / 10, str);
	n = n % 10;
	if (n < 0)
		n *= -1;
	*str = n + '0';
	str++;
	*str = '\0';
	return (str);
}

size_t	ft_strlen(const char *str)
{
	unsigned int	index;

	index = 0;
	while (*str++)
		index++;
	return (index);
}

char	*ft_strdup(const char *s1)
{
	char	*newstr;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s1;
	newstr = malloc(ft_strlen(str) + 1);
	if (newstr == NULL)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/**
 * Convert number into char
*/
char	*ft_itoa(int n)
{
	char	str[12];

	str[0] = '-';
	ft_convert(n, &(str[n < 0]));
	return (ft_strdup(str));
}
