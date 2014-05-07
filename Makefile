OBJS=cbmbasic.o runtime.o plugin.o console.o
CFLAGS=-Wall -O3

all: cbmbasic

cbmbasic: $(OBJS)
	$(CC) -o cbmbasic $(OBJS)

clean:
	rm -f $(OBJS) cbmbasic

