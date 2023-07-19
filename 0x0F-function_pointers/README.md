* project Tile: 0x0F. C - Function pointers
* Requirements:
	1. Allowed editors: vi, vim, emacs
	2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	3. All your files should end with a new line.
	4. A README.md file, at the root of the folder of the project is mandatory.
	5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
	6. You are not allowed to use global variables.
	7. No more than 5 functions per file.
	8. The only C standard library functions allowed are malloc, free and exit. Any use of functions like.
	   printf, puts, calloc, realloc etc… is forbidden
	9. You are allowed to use _putchar.
	10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account.
	11. In the following examples, the main.c files are shown as examples. You can use them to test your functions.
	12. The prototypes of all your functions and the prototype of the function _putchar should be included in your.
	13. Don’t forget to push your header file.
	14. All your header files should be include guarded.
* Tasks:
	0. What's my name:
		* Write a function that prints a name.
		* Prototype: void print_name(char *name, void (*f)(char *));

	1. If you spend too much time thinking about a thing, you'll never get it done.
		* Write a function that executes a function given as a parameter on each element of an array.
		* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
		* where size is the size of the array.
		* and action is a pointer to the function you need to us.

	2. To hell with circumstances; I create opportunities.
		* Write a function that searches for an integer.
		* Prototype: int int_index(int *array, int size, int (*cmp)(int));
		* where size is the number of elements in the array array.
		* cmp is a pointer to the function to be used to compare values.
		* int_index returns the index of the first element for which the cmp function does not return 0.
		* If no element matches, return -1.
		* If size <= 0, return -1.

	3.  A goal is not always meant to be reached, it often serves simply as something to aim at.
		* Write a program that performs simple operations.
		* You are allowed to use the standard library.
		* Usage: calc num1 operator num2.
		* You can assume num1 and num2 are integers, so use the atoi function to convert them from the string
		* input to int.
		
		* 3-calc.h.
			* This file should contain all the function prototypes and data structures used by the program. You can use this
			* structure:

		*  3-op_functions.
			* This file should contain the function that selects the correct function to perform the operation asked by the user.
		        * You’re not allowed to declare any other function.
			* Prototype: int (*get_op_func(char *s))(int, int);
			* where s is the operator passed as argument to the program.
			* This function returns a pointer to the function that corresponds to the operator given as a parameter.
			* Example: get_op_func("+") should return a pointer to the function op_add.
			* You are not allowed to use for or do ... while loops
			* You are not allowed to use goto
			* You are not allowed to use else
			* You are not allowed to use more than one if statement in your code
			* You are not allowed to use more than one while loop in your code
			* If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL
			* You are only allowed to declare these two variables in this function:
			
		* 3-main.c.
			* This file should contain your main function only.
			* ou are not allowed to code any other function than main in this file
			* You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
			* You have to use atoi to convert arguments to int
			* You are not allowed to use any kind of loop
			* You are allowed to use a maximum of 3 if statements
			 
		
