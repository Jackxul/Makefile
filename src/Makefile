# -*-Sub  Makefile  -*-
CC:=gcc
INC_DIR := ../include
B_DIR := ../build
CFLAGS = -c -Wall -I$(INC_DIR)
exe:=main
SRC=${wildcard *.c}
#OBJ=main.o funA.o funB.o
#OBJ=${SRC:.c=.o}
OBJ = $(patsubst %.c,$(B_DIR)/%.o,$(SRC))
#$@ 工作目標名稱
#$< 第一個必條件的檔名
#$^ 所有必要條件的檔名
#$* 工作目標的主檔名

main: $(OBJ)
	@${CC} $(OBJ) -I include  -o ./../exe/$@
	@echo "\nPhase2 -> Create executable file and clean includes\n"
	@sleep 0.5

#${B_DIR}/%.o:$(SRC) $(DEPS) 
#	@${CC} $(CFLAGS) -c $< -o $@

$(B_DIR)/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
