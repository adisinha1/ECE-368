WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

SRCS = main.c
OBJS = $(SRCS:%.c=%.o)

a1: $(OBJS) 
	$(GCC) $(TESTFALGS) $(OBJS) -o a1

clean:
	rm -f a1 *.o output* *~