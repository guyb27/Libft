.PHONY: clean mrproper

LIBFT_STD_DIR=libft_std
LIBFT_STD_PATH=$(LIBFT_PATH)/$(LIBFT_STD_DIR)
LIBFT_PRINTF_DIR=libft_printf
LIBFT_PRINTF_PATH=$(LIBFT_PATH)/$(LIBFT_PRINTF_DIR)
EXEC=hello

all: $(EXEC)

$(EXEC):
	@echo "Compilation de la libft_std"
	@($(MAKE) -C $(LIBFT_STD_DIR))
	@echo "Compilation de la libft_printf"
	@($(MAKE) -C $(LIBFT_PRINTF_DIR))
	ar rcs lib.a libft_std/obj/*.o libft_printf/obj/*.o

clean:
	@($(MAKE) $@ -C $(LIBFT_STD_DIR))
	@($(MAKE) $@ -C $(LIBFT_PRINTF_DIR))

fclean: clean
	@($(MAKE) $@ -C $(LIBFT_STD_DIR))
	@($(MAKE) $@ -C $(LIBFT_PRINTF_DIR))
