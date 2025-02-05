#include "libft.h"
//Returns a pointer to right after the first occurrence of the character c in the string s.
char	*ft_strchr2(const char *s, int c)
{
	int		i;
	char	chr;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)&s[i + 1]);
		i++;
	}
	if (chr == 0)
		return ((char *)(s + i));
	return (NULL);
}
