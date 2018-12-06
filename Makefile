NAME = libft.a
FLAGS = -Wall -Wextra -Werror -I. -c
FILES = *.c

$(NAME): copy
	gcc $(FLAGS) $(FILES)
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

copy:
	cp -f libc/*.c .
	cp -f additional/*.c .
	cp -f bonus/*.c .

test: re
	gcc -I. tests/main.c -L. -lft -o test_libft

clean:
	rm -f *.o
	rm -f *.c

fclean: clean
	rm -f $(NAME)

re: fclean all