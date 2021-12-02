hello : clean
	g++ ./C10/Main.cpp ./C10/Log.h ./C10/Log.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
