# -*- Makefile  -*-
CC:=gcc
CFLAGS =-c -Wall  
exe:=main

build:=$(shell mkdir -p build)
build:=$(shell mkdir -p exe)

SRC=${wildcard *.c}
#OBJ=main.o funA.o funB.o
OBJ=${SRC:.c=.o}

#$@ 工作目標名稱
#$< 第一個必條件的檔名
#$^ 所有必要條件的檔名
#$* 工作目標的主檔名



#call sub Makefile
sub:
	@echo "\nPhase1 -> Call sub Makefile \n"
	@sleep 0.5
	cd src && $(MAKE)
	@echo "\nPhase3 -> build project and show structure\n"
	@sleep 0.5
	tree .
	@echo "\nPhase4 -> Run exe.\n"
	@./exe/${exe}
.PHONY: clean
clean: 
	@echo "\nClean up objective files and prog....\n"
	@sleep 1
	@rm -rf exe
	@rm -rf build
	@echo "\nDone.\n"
	@tree .
#	@cd src && $(MAKE) clean
#	@rm -rf *.o
