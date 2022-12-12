# list/Makefile
#
# Makefile for list implementation and test file.
#
# <Asha Anderson>
list: list.c main.c
	gcc -o list list.c main.c -I.
