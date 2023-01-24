CC = gcc
CFLAGS = -Wall 
OBJS = main.o 

all:	rmDup

rmDup:	$(OBJS)
		$(CC) $(CFLAGS) $^ -o rmDup

main.o: main.c 
		$(CC) -c $(CFLAGS) main.c

clean:
		rm -rf *.o rmDup
