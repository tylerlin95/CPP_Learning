.CLASS_FOLDER = ./C34/

hello : clean
#	g++ $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)log.h $(.CLASS_FOLDER)log.cpp $(.CLASS_FOLDER)static.cpp -o Main

	g++ -S $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)log.h $(.CLASS_FOLDER)log.cpp
#	g++ -S $(.CLASS_FOLDER)Main.cpp

	g++ $(.CLASS_FOLDER)Main.cpp $(.CLASS_FOLDER)log.h $(.CLASS_FOLDER)log.cpp -o Main
#	g++ $(.CLASS_FOLDER)Main.cpp -o Main

	@./Main


.PHONY : clean
clean :
	@rm -f *.s *.o
