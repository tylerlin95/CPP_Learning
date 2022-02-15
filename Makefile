.CLASS_FOLDER = ./C29/

hello : clean
#	g++ $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)log.h $(.CLASS_FOLDER)log.cpp $(.CLASS_FOLDER)static.cpp -o Main
	g++ $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)log.h $(.CLASS_FOLDER)log.cpp -o Main
#	g++ $(.CLASS_FOLDER)Main.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
