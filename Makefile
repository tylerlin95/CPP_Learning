.CLASS_FOLDER = ./C17/

hello : clean
	g++ $(.CLASS_FOLDER)Main.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
