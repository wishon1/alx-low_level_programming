* project Title:0x0A. C - argc, argv
* Requirment:
	1. Allowed editors: vi, vim, emacs
	2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	3. All your files should end with a new line.
	4. A README.md file, at the root of the folder of the project is mandatory.
	5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
	6. You are not allowed to use global variables.
	7. No more than 5 functions per file
	8. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main		.h
	9. Don’t forget to push your header file.
	10. You are allowed to use the standard library
* Tasks:
	0. It ain't what they call you, it's what you answer to
		* Write a program that prints its name, followed by a new line.
			If you rename the program, it will print the new name, without having to compile it again
			You should not remove the path before the name of the program
				
			Repo:

			GitHub repository: alx-low_level_programming
			Directory: 0x0A-argc_argv
			File: 0-whatsmyname.c

	1. Silence is argument carried out by other means.
		* Write a program that prints the number of arguments passed into it.
			our program should print a number, followed by a new line
			
			Repo:

			GitHub repository: alx-low_level_programming
			Directory: 0x0A-argc_argv
			File: 1-args.c

	2. The best argument against democracy is a five-minute conversation with the average voter
		* Write a program that prints all arguments it receives.
			All arguments should be printed, including the first one
			Only print one argument per line, ending with a new line
			
			Repo:

			GitHub repository: alx-low_level_programming
			Directory: 0x0A-argc_argv
			File: 2-args.c

	3. Neither irony nor sarcasm is argument
		* Write a program that multiplies two numbers.
			Your program should print the result of the multiplication, followed by a new line
			You can assume that the two numbers and result of the multiplication can be stored in an integer
			If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
			
			Repo:

			GitHub repository: alx-low_level_programming
			Directory: 0x0A-argc_argv
			File: 3-mul.c
		
	4. To infinity and beyond
		* Write a program that adds positive numbers.
			Print the result, followed by a new line
			If no number is passed to the program, print 0, followed by a new line
			If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
			You can assume that numbers and the addition of all the numbers can be stored in an int

			Repo:

			GitHub repository: alx-low_level_programming
			Directory: 0x0A-argc_argv
			File: 4-add.c

	5. Minimal Number of Coins for Change
		* Write a program that prints the minimum number of coins to make change for an amount of money.
			Usage: ./change cents
			where cents is the amount of cents you need to give back
			if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1			     you should use atoi to parse the parameter passed to your program
			If the number passed as the argument is negative, print 0, followed by a new line
			You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

			Repo:

			GitHub repository: alx-low_level_programming
			Directory: 0x0A-argc_argv
			File: 100-change.c
			
	
