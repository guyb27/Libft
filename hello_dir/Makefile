EXEC=$(ROOT_PATH)/hello
LIB= hello.h
SRC= hello.c main.c
OBJ= $(SRC:.c=.o)

#<CIBLE>: <DEPENDANCE>
#	<COMMANDE>
#
# $@ : nom de la cible
# $< : nom de la premiere dependance
# $^ : liste des dependances
# $? la liste des dependances plus recentes que la cible actuelle
# le nom du fichier sans suffixe

all: $(EXEC)
	@echo "ROOT_PATH: $(ROOT_PATH)"
	@echo "EXEC: $(EXEC)"
	@echo "[ Projet compile ]"

$(EXEC): $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c $(LIB)
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)
