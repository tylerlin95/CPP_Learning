.CLASS_FOLDER = ./C18/

hello : clean
	g++ $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)code.h $(.CLASS_FOLDER)code.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
