.PHONY: clean mrproper

export CC=gcc
export CFLAGS=-Wall -Wextra -Werror
export LDFLAGS=
export ROOT_PATH = $(shell pwd)
export LIBFT_DIR=libft
export LIBFT_PATH=$(ROOT_PATH)/$(LIBFT_DIR)

PROJECT_DIR=hello_dir
EXEC=hello

all: $(EXEC)

$(EXEC):
	@echo "Compilation de la libft"
	@($(MAKE) -C $(LIBFT_DIR))
	@echo "Compilation du projet"
	@($(MAKE) -C $(PROJECT_DIR))

clean:
	@($(MAKE) $@ -C $(LIBFT_DIR))
	@($(MAKE) $@ -C $(PROJECT_DIR))

fclean: clean
	@($(MAKE) $@ -C $(LIBFT_DIR))
	@($(MAKE) $@ -C $(PROJECT_DIR))
