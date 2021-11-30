OBJS=cbmbasic.o runtime.o plugin.o console.o
CFLAGS=-Wall -O3

all: cbmbasic install

cbmbasic: $(OBJS)
	$(CC) -o cbmbasic $(OBJS)

clean:
	rm -f $(OBJS) cbmbasic

install:
	cp cbmbasic /usr/bin/cbmbasic
	
uninstall:
	rm /usr/bin/cbmbasic
