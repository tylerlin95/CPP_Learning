.CLASS_FOLDER = ./C12/

hello : clean
	g++ $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)Log.h $(.CLASS_FOLDER)Log.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
