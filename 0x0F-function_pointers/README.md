contains C files on pointer functions

0. file 0-print_name.c is a function that prints a name.

1. file 1-array_iterator.c is a function that executes a function given as a parameter on each element of an array.
Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use

2. file 2-int_index.c is a function that searches for an integer.
Prototype: int int_index(int *array, int size, int (*cmp)(int));
where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values
int_index returns the index of the first element for which the cmp function does not return 0
If no element matches, return -1
If size <= 0, return -1

3. file 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.hare programs that performs simple operations.

4. file 100-main_opcodes.c is a program that prints the opcodes of its own main function.
Usage: ./main number_of_bytes
Output format:
the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example
You are allowed to use printf and atoi
You have to use atoi to convert the argument to an int
If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
You do not have to compile with any flags 
