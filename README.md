
# Our _printf()
This Repository has all functions to make _printf() work correctly. _printf() its a custom function based on printf() from <stdio.h> library.
 

## Prototype

```bash
  int _printf(const char *format, ...); 
```
    
## Description
_printf() is a variadic function that takes an string argument called "format" and also a variable list of arguments. This string can display formatted variables and special control characters, such as new lines (‘\n’), backspaces (‘\b’) and tabspaces (‘\t’). Conversion specification characters are used to specify the format on which the program should interpret the given arguments. If _printf() contains more than one argument then the format of the output is defined using a percentage (%) character followed by a format description character



![App Screenshot](https://cdn.discordapp.com/attachments/426884073328214017/996107038352494663/unknown.png)
## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS
- Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl
- Lenguage used: C


## Format Specifiers

Every format specification starts with a percentage sign and ends with a letter. Here is a list:


|  %        | Description                |
| :-------- | :------------------------- |
| %c        | Print a single character |
| %s        | Print a string of characters |
| %d        | Print a decimal (base 10) number|
| %i        | Print an integer in base 10|


## Important files

- [_printf.c](https://github.com/ismael-soler/holbertonschool-printf/blob/master/_printf.c) - Main code.
- [functions.c](https://github.com/ismael-soler/holbertonschool-printf/blob/master/functions.c) - Auxiliar functions.
- [get_func.c](https://github.com/ismael-soler/holbertonschool-printf/blob/master/get_func.c) - Gets the necessary auxiliar function from functions.c.
- [main.h](https://github.com/ismael-soler/holbertonschool-printf/blob/master/main.h) - Main header.
- [man_3_printf](https://github.com/ismael-soler/holbertonschool-printf/blob/master/man_3_printf) - Man page for our _printf().
## Authors

- [Ismael Soler](https://github.com/ismael-soler)
- [Santiago Alves](https://github.com/santialvesz)

