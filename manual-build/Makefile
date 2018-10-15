CC=g++

hello: hello.o
	$(CC) -o $@ $<

.cpp.o:
	$(CC) -c $< -o $@

check: hello
	@echo "" && ./$< World

clean:
	rm -f *.o hello

