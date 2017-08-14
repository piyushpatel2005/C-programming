# C Programming

created by Dennis Ritchie at Bell Telephone Laboratories in 1972.

- powerful and flexible language
- portable language
- modular
- compiled language, much closer to the hardware.

On UNIX system, the compiler creates object files with extension of .o instead of .obj
The object file produced must be combined with object code from the function library to create the final executable program. This process is called linking and is performed by linker.
Source file is saved as .c extension.
To compile type the following command on UNIX systems

`gcc <filename>`
and then run the program.

For example hello.c file can be compiled and run as:

`
gcc hello.c
./a.out
`

#include directive instructs the C compiler to add the contents of an incldue file into your profgram during compilation.

**Operators**

+ Addition
- Subtraction
/ Division
* Multiplication
% Modulus
++ Increment
-- Decrement



**Table of Content**

1. [Helloworld](basics/hello.c)
2. [Age](basics/age_year.c)
3. [PostIncrement and PreIncrement](basics/increment.c)
