CC=g++

hello: hello.o Utility.o
	$(CC) -o $@ $^ 

%.o: %.cpp
	$(CC) -c $< -o $@

check: hello
	@echo "" && ./$< World && echo

clean:
	rm -f *.o hello

