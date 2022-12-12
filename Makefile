# list/Makefile
#
# Makefile for list implementation and test file.
#
# <Asha Anderson>
list: main.c list.c
	gcc -o list main.c list.c -I.
