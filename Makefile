CC=gcc
CFLAGS= -g

.DEFAULT:
main:
	$(CC) $(CFLAGS) main.c -o runme

hello:
	echo "hello"

clean:
	rm -rf a.out runme *.o
