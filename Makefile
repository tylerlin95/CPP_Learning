.CLASS_FOLDER = ./C20/

hello : clean
	g++ $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)log.h $(.CLASS_FOLDER)log.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
