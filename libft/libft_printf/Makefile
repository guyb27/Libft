# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: qcharpen <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/06/26 01:24:46 by qcharpen     #+#   ##    ##    #+#        #
#    Updated: 2019/11/18 11:17:26 by gmadec      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Werror -Wextra -Wall

PF_LIBFT_PATH = ./sources/libft

LIBFT = $(PF_LIBFT_PATH)/pf_isdigit.c \
		$(PF_LIBFT_PATH)/pf_isinstr.c \
		$(PF_LIBFT_PATH)/pf_memalloc.c \
		$(PF_LIBFT_PATH)/pf_tabset.c \
		$(PF_LIBFT_PATH)/pf_strchr.c \
		$(PF_LIBFT_PATH)/pf_strdup.c \
		$(PF_LIBFT_PATH)/pf_strcut.c \
		$(PF_LIBFT_PATH)/pf_strlen.c \
		$(PF_LIBFT_PATH)/pf_strnjoin.c \
		$(PF_LIBFT_PATH)/pf_itoa.c \
		$(PF_LIBFT_PATH)/pf_ftoa.c \
		$(PF_LIBFT_PATH)/pf_itoa_base.c \
		$(PF_LIBFT_PATH)/pf_strsub.c \
		$(PF_LIBFT_PATH)/pf_strnew.c \

PF_LISTS_PATH = ./sources/lists

LISTS = $(PF_LISTS_PATH)/ft_lstdel.c \
		$(PF_LISTS_PATH)/ft_lstaddend.c \
		$(PF_LISTS_PATH)/ft_lstlen.c \
		$(PF_LISTS_PATH)/ft_lstnew.c \
		$(PF_LISTS_PATH)/ft_lstprint.c \

PARSE_PATH = ./sources/parse

PARSE = sources/parse/pf_parse_tests.c \
		sources/parse/pf_parsing.c \

HANDLERS_PATH = sources/handlers

HANDLERS = $(HANDLERS_PATH)/ft_printf.c \
		   $(HANDLERS_PATH)/pf_handle.c \
		   $(HANDLERS_PATH)/pf_handle_percent.c \
		   $(HANDLERS_PATH)/pf_handle_char.c \
		   $(HANDLERS_PATH)/pf_handle_str.c \
		   $(HANDLERS_PATH)/pf_handle_signed_int.c \
		   $(HANDLERS_PATH)/pf_handle_unsigned_int.c \
		   $(HANDLERS_PATH)/pf_handle_hex.c \
		   $(HANDLERS_PATH)/pf_handle_oct.c \
		   $(HANDLERS_PATH)/pf_handle_p.c \
		   $(HANDLERS_PATH)/pf_handle_float.c \


SRCS = $(LIBFT) $(LISTS) $(PARSE)

OBJ = $(LIBFT:.c=.o) $(LISTS:.c=.o) $(PARSE:.c=.o) $(HANDLERS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(PF_LIBFT_PATH)%.o: $(LIBFT)%.c
	@gcc -c $(FLAGS) $(LIBFT)

$(PF_LISTS_PATH)%.o: $(LISTS)%.c
	@gcc -c $(FLAGS) $(LISTS)

$(PARSE_PATH)%.o: $(PARSE)%.c
	@gcc -c $(FLAGS) $(PARSE)

$(HANDLERS_PATH)%.o: $(HANDLERS)%.c
	@gcc - c $(FLAGS) $(HANDLERS)

valgrind:
	@gcc -ggdb3 ./sources/*/*.c test.c -I includes
	@valgrind --leak-check=full --track-origins=yes ./a.out
	@@rm -f $(OBJ) test.o a.out

clean:
	@rm -f $(OBJ)
	@echo "[SUPPRESSION DE LA LIBFT_PRINTF]"

fclean: clean
	@rm -f $(NAME)
	@echo "[SUPPRESSION DES SRCs_PRINTF]"

re: fclean all
