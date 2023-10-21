#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*pos;
	
	if(!*s || !start || !len)
		return (0);
	str = (char *)malloc(len * sizeof(char));
	if(str == NULL)
		return (NULL);
	pos = str;
	len = len - start;
	while(len--)
		*str++ = s[start++];
	return(pos);
}
