
# Our _printf()
This Repository had all functions to make _printf() works correctly. _printf() its a custom function based on printf() function from <stdio.h> library.
 

## Prototype

```bash
  int _printf(const char *format, ...); 
```
    
## Description
_printf() is a variadic function that take an argument called "format" that is a string and also a variable list of arguments. This string can display formatted variables and special control characters, such as new lines (‘\n’), backspaces (‘\b’) and tabspaces (‘\t’). Conversion control characters describe the format of how the message string uses the other arguments. If printf() contains more than one argument then the format of the output is defined using a percent (%) character followed by a format description character.



![App Screenshot](https://cdn.discordapp.com/attachments/426884073328214017/996107038352494663/unknown.png)
## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS
- Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl
- Lenguage used: C


## Format Specifiers

Every format specification starts with a percent sign and ends with a letter. Here is a list:


|  %        | Description                |
| :-------- | :------------------------- |
| %c        | Print single character |
| %s        | Print a string of characters |
| %d        | Print a decimal (base 10) number|
| %i        | Print an integer in base 10|


## Important files

- [_printf.c](https://github.com/ismael-soler/holbertonschool-printf/blob/master/_printf.c) - Here is the main code.
- [functions.c](https://github.com/ismael-soler/holbertonschool-printf/blob/master/functions.c) - Store all the functions that _printf() uses.
- [get_func.c](https://github.com/ismael-soler/holbertonschool-printf/blob/master/get_func.c) - Store the structure with the functions.
- [main.h](https://github.com/ismael-soler/holbertonschool-printf/blob/master/main.h) - Contains all the prototypes.
- [man_3_printf](https://github.com/ismael-soler/holbertonschool-printf/blob/master/man_3_printf) - Man page for our _printf().
## Authors

- [Ismael Soler](https://github.com/ismael-soler)
- [Santiago Alves](https://github.com/santialvesz)


## Screenshots

![App Screenshot](https://via.placeholder.com/468x300?text=App+Screenshot+Here)

