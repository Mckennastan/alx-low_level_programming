This is a readme for pointer arrays
C - Pointers, arrays and strings

0: Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

1: Write a function that swaps the values of two integers.

2: Write a function that returns the length of a string.

3: Write a function that prints a string, followed by a new line, to stdout.

4: Write a function that prints a string, in reverse, followed by a new line.

5: Write a function that reverses a string.

6: Write a function that prints every other character of a string, starting with the first character, followed by a new line.

7: Write a function that prints half of a string, followed by a new line.

8: Write a function that prints n elements of an array of integers, followed by a new line.

9: Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

10: Write a function that convert a string to an integer. The number in the string can be preceded by an infinite number of characters You need to take into account all the - and + signs before the number If there are no numbers in the string, the function must return 0 You are not allowed to use long You are not allowed to declare new variables of “type” array You are not allowed to hard-code special values We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

11: Create a program that generates random valid passwords for the program 101-crackme.

You are allowed to use the standard library You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests) man srand, rand, time gdb and objdump can help

Footer
