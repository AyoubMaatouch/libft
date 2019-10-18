#Makefile

all: lib libft.a

libft.a: lib	
	ar rc libft.a *.o
lib : *.c
	gcc -c -Wall -Werror -Wextra *.c
clean :
	rm -rf *.o
