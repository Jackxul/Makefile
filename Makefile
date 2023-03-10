# -*- Makefile  -*-
co:=gcc
exe:main
objec:main.o funA.o funB.o


all: $(objec)
	@$(co) -o $(exe) $^ -l m 

%.o: %.c
	@$(co) -c $<


clean: 
	@echo Clean up objective files and prog....
	@rm -rf $(objec) main
