hello : clean
	g++ ./C09/Main.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
