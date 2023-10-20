cc = gcc

cflags = -Wall -Werror -Wextra

cfiles = ft_isascii.c 

ofiles = $(SRCS:.c=.o)

name = libft.a

all: $(name) clean

$(name): $(ofiles)
	ar rcs $(name) $(ofiles)

clean:
	rm -f $(ofiles)

fclean:
	clean rm -f $(name)

re: fclean $(name)

.PHONY: all clean fclean re


