NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_split.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJECTS = $(FILES:.c=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS)

.PHONY: all clean fclean re so
