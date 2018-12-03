NAME = libft.a
FLAGS = -Wall -Wextra -Werror -I. -c
FILES = ft_strlen.c \
		ft_strcat.c \
		ft_memset.c \
		ft_bzero.c \
		ft_strdup.c

$(NAME):
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

re: fclean all