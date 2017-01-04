CC = gcc
CFLAGS = `pkg-config --cflags gtk+-3.0`
LDFLAGS = -module -Wl,--export-dynamic
LIBS = `pkg-config --libs gtk+-3.0`
LD = ld


all:test.c
	$(CC) $(CFLAGS) $(LIBS) test.c -o test

clean:
	rm -f test
