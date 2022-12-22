COMPILE_C = gcc -c

all: main.o message.o args.o
	gcc -o main main.o messages.o args.o

main.o: src/main.c src/args.h src/colors.h
	$(COMPILE_C) src/main.c -o main.o

message.o: src/messages.c src/messages.h src/colors.h
	$(COMPILE_C) src/messages.c -o messages.o

args.o: src/args.c src/args.h src/messages.h src/colors.h
	$(COMPILE_C) src/args.c -o args.o

clean:
	rm -f *.o
