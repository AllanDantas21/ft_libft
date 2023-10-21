cc = gcc 
CFILES = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c\
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c\
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c\
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c\
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c  
		 
OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

.o:	$(CFILES)
	$(CC) $(CFLAGS) $(CFILES)
	
$(NAME): $(OFILES)
	ar -cru $(NAME) $(OFILES) 
clean:
	rm -f $(OFILES)
fclean:  
	clean rm -f $(NAME)
re: fclean all

.PHONY:  all clean fclean re
