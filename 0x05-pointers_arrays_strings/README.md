contains descriptions of c files
0. file 0-reset_to_98 is a function that takes a pointer to an int as parameter and updates the value it points to to 98 with the prototype: void reset_to_98(int *n);
1. file 1-swap.c is a function that swaps the values of two integers, with the prototype: void swap_int(int *a, int *b);
2. file 2-strlen.c a function that returns the length of a string, with prototype: int _strlen(char *s);
3. file 3-puts.c a function that prints a string, followed by a new line, to stdout. with the prototype: void _puts(char *str);
4. file 4-print_rev.c is a function that prints a string, in reverse, followed by a new line, with the prototype: void print_rev(char *s); 
5. file 5-rev_string.c is a  function that reverses a string.
with the prototype: void rev_string(char *s)
6. file 6-puts2.c is a function that prints every other character of a string, starting with the first character, followed by a new line, with the prototype: void puts2(char *str); 
7. file 7-puts_half.c is  a function that prints half of a string, followed by a new line:
Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2 
8. file 8-print_array.c is a function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
9. file 9-strcpy.c is a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
Return value: the pointer to dest
10. file 100-atoi.c is a function that convert a string to an integer.
Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
11. file 101-keygen.c Create a program that generates random valid passwords for the program 101-crackme.
You are allowed to use the standard library
You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help
