# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/23 00:42:06 by gmadec       #+#   ##    ##    #+#        #
#    Updated: 2017/11/24 10:28:45 by gmadec      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INC_PATH = ./

SRC = ft_atoi.c \
	ft_itoa.c \
	ft_strcat.c \
	ft_strcpy.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_strncpy.c \
	ft_isalpha.c \
	ft_memccpy.c \
	ft_memset.c \
	ft_strcmp.c \
	ft_strmap.c \
	ft_strstr.c \
	ft_strncat.c \
	ft_isascii.c \
	ft_memchr.c \
	ft_putchar.c \
	ft_strcpy.c \
	ft_strncmp.c \
	ft_tolower.c \
	ft_isdigit.c \
	ft_memcmp.c \
	ft_putstr.c \
	ft_strdup.c \
	ft_strncpy.c \
	ft_toupper.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_striter.c \
	ft_strnew.c \
	ft_bzero.c \
	ft_memdel.c \
	ft_strchr.c \
	ft_striteri.c \
	ft_strnstr.c \
	ft_isalnum.c \
	ft_memalloc.c \
	ft_memmove.c \
	ft_strclr.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strdel.c \
	ft_strmapi.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_putendl.c \
	ft_strsplit.c \
	ft_puttabint.c \
	ft_puttabstr.c \
	ft_tabstrrev.c \
	ft_tabstrrevvh.c \
	ft_strrev.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strlcat.c \
	ft_itoa_base.c \
	ft_nbrlen.c \
	ft_power.c \
	ft_lstnew.c \
	ft_lstdelone.c \
	ft_lstdel.c \
	ft_lstadd.c \
	ft_lstiter.c \
	ft_lstmap.c

GREEN	=\033[0;32m

OBJ=$(SRC:.c=.o)

INC		= $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@printf "$(GREEN)Created $@\n"
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)


re: fclean all

.PHONY : clean fclean all re
