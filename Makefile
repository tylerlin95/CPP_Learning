hello : clean
	g++ Main_2021_11_13.cpp -o Main
	@./Main

.PHONY : clean
clean :
	@rm -f *.s *.o
