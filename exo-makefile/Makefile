COMPILE_C = gcc -c

all: main.o messages.o args.o addition.o
	gcc -o main main.o messages.o args.o

main.o: src/main.c src/args.h src/colors.h
	$(COMPILE_C) src/main.c -o main.o

messages.o: src/messages.c src/messages.h src/colors.h
	$(COMPILE_C) src/messages.c -o messages.o

args.o: src/args.c src/args.h src/messages.h src/colors.h
	$(COMPILE_C) src/args.c -o args.o
	
addition.o: src/addition.c src/addition.h
	$(COMPILE_C) src/addition.c -o addition.o
	
test_main.o: test_jenkins/main.c 
	gcc -c test_jenkins/main.c -o test_main.o

test: test_main.o addition.o
	gcc -o main_test test_main.o addition.o

clean:
	rm -f *.o
