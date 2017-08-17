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
< Less than
> greater than
>= greater than or equal to
<= less than or equal to
== equal to
!= not equal to
! NOT
&& logical AND
|| logical OR
exp1 ? exp2 : exp3 (ternary operator)


In C, true is represented by value 1 and false by value 0.

There is an operator precedence as in simple Mathematics.

## Conditionals

```c
if(expression) {
  statements ...
  ... ... ...
} else if(expression2) {
  statements2 ... ...
  ... ... ...
} else {
  statements3
  ... ... ...
}
```

Putting semicolon(;) at the end of if statement causes the if clause to end.

## Functions:

A function is a named, independent section of C code that performs a specific task and optionally returns a value to the calling program. Function is not executed until it is called by caller function.

Before defining a function, we can provide function prototype.

```c
retrun-type function_name(arg-type name1, ..., arg-type name-n);
```

Function prototype examples:

```c
double square(double number);
void print_report(int report_number);
```

An argument is an actual value passed to the function by calling function. A parameter is an entry in a function header; it serves as a placeholder for an argument.

All the variables declared in a function are called local variables. A function can return any value using `return` statement.

Arguments can be passed to a function when we call the function in the parentheses.

inline functions are small functions. The compiler tries to execute it in the fastest manner possible.

```c
inline int toInches(int feet) {
  return feet * 12;
}
```

## Loops

```c
for (initial condition; condition; increment) {
  statements;
}
```

```c
while(condition) {
  statements;
}
```

## Arrays

Declare data array of 1000 integers.

```c
int data[1000];
int year[12][31];
```

Array values can be assigned like this :

```c
data[3] = 2;

```

Arrays start from index 0, not 1.

```c
do {
  statements;
} while(condition);
```

The statements associated with do...while are always executed at least once.

**Format specifiers**

%c  - char
%d  - int, short
%ld - long
%f  - float, double
%s  - char arrays
%u  - unsigned int, unsigned short
%lu - unsigned long

- `puts` function is used to display text messages on the screen. It adds new line at the end automatically.

- `scanf` function is used to take input from the user.

```c
int main(void) {
  float y;
  int x;
  puts("Enter a float, then an int");
  scanf("%f %d", &y, &x);
  printf("\nYou enetered %f and %d", y, x);
  return 0;
}
```





**Table of Content**

1. [Helloworld](basics/hello.c)
2. [Age](basics/age_year.c)
3. [Constants](basics/const.c)
3. [PostIncrement and PreIncrement](basics/increment.c)
4. [If Else example](basics/agechecker/main.c)
5. [Relational operators](basics/realational/main.c)
6. [Function example](basics/cube.c)
7. [Room assignment char function](basics/roomassign.c)
8. [For loop](basics/forloop.c)
9. [While loop](basics/whileloop.c)
10. [Nested For loop](basis/nested_for.c)
11. [Recursion](basics/recursion.c)
12. [Printf function](basics/escape.c)
13. [Array example](basics/expenses.c)
