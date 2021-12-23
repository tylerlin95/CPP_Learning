.CLASS_FOLDER = ./C19/

hello : clean
	g++ $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)code.h $(.CLASS_FOLDER)code.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
