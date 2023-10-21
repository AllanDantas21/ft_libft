#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*pos;
	int	lcpy;

	if (!s)
		return (NULL);
	lcpy = (int)(len - start);
	str = (char *)malloc((len * sizeof(char)) + 1);
	if (!str)
		return (NULL);
	pos = str;
	while(lcpy > 0)
	{
		*str++ = (char)s[start++];
		lcpy--;
	}
	*str = 0;
	return(pos);
}
