WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

SRCS = a1.c
OBJS = $(SRCS:%.c=%.o)

TARGET = a1
all: $(TARGET)

.c.o:
	$(GCC) $(TESTFALGS) -c $*.c

clean:
	rm -f a1 *.o output* *~