#include "libft.h"
size_t	ft_strlcpy(char *dest,const char *src, size_t size)
{
	size_t len;

	if (src == NULL)
		return (0);
	len = ft_strlen(src);
	size -= 1;
	if (size > 0)
	{
		while (*src && size--)
			*dest++ = *src++;
		*dest = '\0';
	}
	if(size == 0)
		*dest = '\0';
	return (len);
}

