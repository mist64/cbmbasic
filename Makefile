OBJS=cbmbasic.o runtime.o plugin.o console.o
CFLAGS+=-Wall

all: cbmbasic

cbmbasic: $(OBJS)
	$(CC) $(LDFLAGS) -o cbmbasic $(OBJS)

clean:
	rm -f $(OBJS) cbmbasic

