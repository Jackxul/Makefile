# -*- Makefile  -*-
CC:=gcc
CFLAGS =-c -Wall  
exe:=main

build:=$(shell mkdir -p build)

SRC=${wildcard *.c}
#OBJ=main.o funA.o funB.o
OBJ=${SRC:.c=.o}

#$@ 工作目標名稱
#$< 第一個必條件的檔名
#$^ 所有必要條件的檔名
#$* 工作目標的主檔名


main: $(OBJ)
	@${CC} $(OBJ) -o $@    

.o:$(SRC) 
	@${CC} $^ -c $@


.PHONY: clean
clean: 
	@echo Clean up objective files and prog....
	@rm -rf ${exe}
	@rm -rf build
	@rm -rf *.o
