# -*-Sub  Makefile  -*-
CC:=gcc
CFLAGS = -Wall -g
exe:=main


SRC=${wildcard *.c}
#OBJ=main.o funA.o funB.o
OBJ=${SRC:.c=.o}

#$@ 工作目標名稱
#$< 第一個必條件的檔名
#$^ 所有必要條件的檔名
#$* 工作目標的主檔名

main: $(OBJ)
	${CC} $(OBJ) -o $@
	@echo "\nPhase3 -> Create executable file and clean includes\n"
	@sleep 0.5
	mv ${OBJ} ./../build/
	mv ${exe} ./../exe
	rm ./*.h 
.o:$(SRC) 
	@${CC} $^ -c $@ 


#.PHONY: clean
#clean: 
#	@echo Clean up objective files and prog....
#	@rm -rf ${exe}
#	@rm -rf build
#	@rm -rf *.o
