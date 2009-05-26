BINARY_FILE = test
COMPILER = gcc

all: 
	@echo "Nominerdene "

compile: 
	@echo "Compiling ........."
	$(COMPILER) -o $(BINARY_FILE) test.c test_lib1.c test_lib2.c
	

test:
	$(BINARY_FILE)

clean: 
	@echo "Cleaning ...." 
	@rm -f *.o
	@rm $(BINARY_FILE)
  #@rm -f test_lib1  $(OBJECTS)


