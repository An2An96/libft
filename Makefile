NAME = libft.a
FLAGS = -Wall -Wextra -Werror -I. -c
FILES = *.c
		# ft_strlen.c \
		# ft_strcat.c \
		# ft_strncat.c \
		# ft_strlcat.c \
		# ft_memset.c \
		# ft_bzero.c \
		# ft_strdup.c \
		# ft_strcpy.c \
		# ft_strncpy.c \
		# ft_strchr.c \
		# ft_strrchr.c \
		# ft_strstr.c

$(NAME): copy
	gcc $(FLAGS) $(FILES)
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

copy:
	cp -f libc/*.c .

test: re
	gcc -I. tests/main.c -L. -lft -o test_libft

clean:
	rm -f $(NAME)

fclean: clean
	rm -f *.o
	rm -f *.c

re: fclean all