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

Arrays can also be initialized in the same line as declaration using curly braces. {}.

```c
int array[] = {10, 20, 30};
```

creates array of 3 int elements with values 10, 20, 30.

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

## Pointers

Address of a variable is a number. Pointer stores the address of a variable and hence can be treated as a number.

Declarting a pointer

```c
typename *ptrname;
```

* is indirection operator.

```c
char *ch1, *ch2;    // ch1 and ch2 are pointers type char
float *value;     // value is pointer to type float
```

Pointer is initialized with address-of operator(&).

```c
pointer = &variable;
p_value = &value;
```

*p_rate gives the value of the variable stored.

If `*ptr = &val` then `ptr` and `&val` have the same address location and `*ptr` and `val` contains the same value.

Pointers can be extremely useful for working with arrays. An array name without brackets is actually a pointer to the array. If you declare `data[]` then data is actually the address of the first array element. You can also use `data[0]` to get the address of the first element.

```c
int array[100], *p_array;
p_array = array;
```

p_array is a pointer and can be modified to point elsewhere. array is locked to point at array[0].

Pointer comparison (logical operations >, <, ==) between two pointers that point to the same data type is possible. C compiler doesn't allow multiplication and division operations with pointers.

```c
*(array) == array[0]
*(array + 1) == array[1]
```

Arrays are passed as reference.


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
14. [Multi-dimensional array](basics/scoring.c)
15. [Random Array](basics/randomarray.c)
16. [Basic Pointers](basics/pointer.c)
17. [Pointer types](basics/arraysize.c)
18. [Pointer arithmetic](basics/ptr_math.c)
19. [Pass Array to functions](basics/arraypass.c)
