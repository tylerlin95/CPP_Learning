hello : clean
	g++ ./C08/Main.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
