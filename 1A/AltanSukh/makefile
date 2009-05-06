BINARY_FILE = Value
COMPILER = gcc

About:
	@echo "My name is Sukhee"

Compile:
	@echo "Compiling ........."
	$(COMPILER) -o $(BINARY_FILE) Value.c Value_lib.c Value_lib2.c
	
Test:
	./$(BINARY_FILE)
	
Clean: 
	@echo "Cleaning ...." 
	@rm -f *.o
	@rm $(BINARY_FILE) 
	
