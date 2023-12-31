* Project Title: 0x09. C - Static libraries
* Requirements: 
	1. Allowed editors: vi, vim, emacs
	2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	3. All your files should end with a new line
	4. A README.md file, at the root of the folder of the project is mandatory
	5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	6. You are not allowed to use global variables
	7. No more than 5 functions per file
	8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
	9. You are allowed to use _putchar
	10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
	11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to		push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.h  m	     ight be different from the one shown in the examples
	12. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called mai		  n.h
	13. Don’t forget to push your header file
* Bash;
	1. Allowed editors: vi, vim, emacs
	2. All your scripts will be tested on Ubuntu 20.04 LTS
	3. All your files should end with a new line 
	4. The first line of all your files should be exactly #!/bin/bash
	5. A README.md file, at the root of the folder of the project, describing what each script is doing
	6. All your files must be executable
* Tasks:
	0. A library is not a luxury but one of the necessities of life
		Create the static library libmy.a containing all the functions listed below:
			int _putchar(char c);
			int _islower(int c);
			int _isalpha(int c);
			int _abs(int n);
			int _isupper(int c);
			int _isdigit(int c);
			int _strlen(char *s);
			void _puts(char *s);
			char *_strcpy(char *dest, char *src);
			int _atoi(char *s);
			char *_strcat(char *dest, char *src);
			char *_strncat(char *dest, char *src, int n);
			char *_strncpy(char *dest, char *src, int n);
			int _strcmp(char *s1, char *s2);
			char *_memset(char *s, char b, unsigned int n);
			char *_memcpy(char *dest, char *src, unsigned int n);
			char *_strchr(char *s, char c);
			unsigned int _strspn(char *s, char *accept);
			char *_strpbrk(char *s, char *accept);
			char *_strstr(char *haystack, char *needle);
		Note: 	If you haven’t coded all of the above functions create empty ones with the right prototype. Don’t forget to push your 				main.h file to your repository. It should at least contain all the prototypes of the above functions.
		Repo:

			GitHub repository: alx-low_level_programming
			Directory: 0x09-static_libraries
			File: libmy.a, main.h

	1. Without libraries what have we? We have no past and no future mandatory.
		Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in t			he current directory.
		Repo:

			GitHub repository: alx-low_level_programming
			Directory: 0x09-static_libraries
			File: create_static_lib.sh

