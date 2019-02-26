############################		Variables		############################
OK_COLOR=\x1b[32;01m
DANGER_COLOR=\x1b[1;31m
YELLOW_COLOR=\x1b[0;33m
NO_COLOR=\x1b[0m

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

INC_DIR = ./includes
SRCS_DIR = ./srcs
OBJS_DIR = ./obj

FUNCS =	ft_memalloc ft_memdel ft_memdel ft_memcpy ft_memmove ft_memset \
		ft_memccpy ft_memchr ft_memcmp ft_bzero \
\
		ft_isdigit ft_isprint ft_isalpha ft_isascii ft_isalnum \
		ft_tolower ft_toupper \
\
		ft_strlen ft_strdup ft_strnew ft_strdel ft_strclr \
		ft_strcpy ft_strncpy ft_strcat ft_strncat ft_strlcat \
		ft_strequ ft_strnequ ft_strcmp ft_strncmp ft_strchr ft_strrchr \
		ft_strstr ft_strnstr ft_strsub ft_strjoin ft_strtrim ft_strsplit \
		ft_striter ft_striteri ft_strmap ft_strmapi ft_strlower ft_strupper \
\
		ft_atoi ft_itoa ft_itoa_base ft_uitoa_base ft_dtoa ft_stoa \
\
		ft_putchar ft_putstr ft_putendl ft_putnbr \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
\
		ft_lstnew ft_lstnew_ptr ft_lstadd ft_lstdelone ft_lstdel ft_lstpush \
		ft_lstremove ft_lstlen ft_lstiter ft_lstmap \
\
		ft_dlst_create ft_create_node ft_dlst_push_front ft_dlst_push_back \
\
		get_next_line \
		ft_pow \
		ft_printchr ft_str_fixlen

SRCS = $(foreach func,$(FUNCS),$(SRCS_DIR)/$(func).c)
OBJ = $(foreach func,$(FUNCS),$(OBJS_DIR)/$(func).o)

############################		  Rules 		############################

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW_COLOR)Building $@$(NO_COLOR)"
	@ar rc $@ $^
	@ranlib $@
	@echo "$(OK_COLOR)Build complete$(NO_COLOR)"

$(OBJ): | $(OBJS_DIR)

$(OBJS_DIR):
	@mkdir -p $@

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@gcc $(FLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(DANGER_COLOR)Object files cleared$(NO_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(DANGER_COLOR)Build cleared$(NO_COLOR)"

re: fclean all

.PHONY: all clean fclean re

#	by rschuppe