CC=g++

hello: hello.o Utility.o
	$(CC) -o $@ hello.o Utility.o 

.cpp.o:
	$(CC) -c $< -o $@

check: hello
	@echo "" && ./$< World && echo

clean:
	rm -f *.o hello

