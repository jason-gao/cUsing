# c study

build: HelloWorld.c HelloWorld.h
	cc -c HelloWorld.c
link: HelloWorld.o
	cc -o a.out HelloWorld.o
run:
	./a.out
all: build link run
.PHONY: build run link all