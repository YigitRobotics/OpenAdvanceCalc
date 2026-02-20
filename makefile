compile-and-run:
	gcc -Wall -Wextra -fsanitize=address,undefined -g main.c -o program_bin.out
	./program_bin.out