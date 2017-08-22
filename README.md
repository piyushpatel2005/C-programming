# C Programming


created by Dennis Ritchie at Bell Telephone Laboratories in 1972. It's close to the hardware so it is very fast compared to other languages.

## Basics

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

[Hello world example](basics/hello.c)
[Getting input](basics/age_year.c)
[Creating constants in C](basics/const.c)

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

[PostIncrement and PreIncrement example](basics/increment.c)


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

[If else example](basics/agechecker.c)

- `break` statement is used to break the loop in the middle of the loop.

```c
for(count = 0; count < 10; count++) {
  if(count == 5)
    break;
}
```

- `continue` can be used to continue the loop at a particular index or condition.

```c
for(count = 0; count < 10; count++) {
  if(count == 5)
    continue;
}
```

[Continue example](basics/continue.c)

**Switch** statement can be used to make nested if else easier to write and read.

```c
switch(expression) {
  case value1:
    statements;
    break;
  case value2:
    statements2;
    break;
  ... ... ...
  ... ... ...
  default:
    statement-n;
}
```

To exit a program, we can use exit(statuscode) function.

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

[Simple function example](basics/cube.c)

An argument is an actual value passed to the function by calling function. A parameter is an entry in a function header; it serves as a placeholder for an argument.

All the variables declared in a function are called local variables. A function can return any value using `return` statement.

Arguments can be passed to a function when we call the function in the parentheses.

inline functions are small functions. The compiler tries to execute it in the fastest manner possible.

```c
inline int toInches(int feet) {
  return feet * 12;
}
```

[Passing parameters in function](basics/roomassign.c)

## Loops

```c
for (initial condition; condition; increment) {
  statements;
}
```

[For loop](basics/forloop.c)
[Nested For loop](basics/nested_for.c)

```c
while(condition) {
  statements;
}
```

[While loop example](basics/whileloop.c)

do..while loop is executed at least once because the condition is checked only at the end of the first iteration.

```c
do {
  statements...
  ... ... ...
} while(condition);
```

[Recursion example](basics/recursion.c)
[Escape sequences](basics/escape.c)

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

[Array Example](basics/expenses.c)
[Multi dimensional array](basics/scoring.c)
[Random array, Random number example](basics/randomarray.c)

### Multidimensional array

[Multidimensional array example](basics/multiarraysize.c)
[Pointer arithmetic with multidimensional array](basics/multiarraymath.c)

**Format specifiers**

%c  - char
%d  - int, short
%ld - long
%f  - float, double
%s  - char arrays
%u  - unsigned int, unsigned short
%lu - unsigned long
%p - pointer

- `puts` function is used to display text messages on the screen. It adds new line at the end automatically.

- `scanf` function is used to take input from the user.
- Similarly `gets()` can be used to get a string from the user.

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

[Pointer example](basics/pointer.c)

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


[Array with pointer](basics/arraysize.c)
[Pointer arithmetic](basics/ptr_math.c)
[Passing array to functions using pointer](basics/arraypass.c)
[Another example](basics/arraypass2.c)

### Pointer to pointers

```c
int *ptr;
ptr = &myVar;
*ptr = 12;
int **ptr_to_ptr = &ptr;
printf("%d", **ptr_to_ptr);
```

### Passing multidimensional array to function

[Passing multidimensional array](basics/ptrmulti.c)

[Passing array of pointers to a function](basics/message2.c)

### Array of pointers

We can also create array of pointers. Take a look at [example](basics/nessage,c)

[Sorting program](basics/sort.c)

### Pointer to functions

You must declare a pointer to function before using it. A pointe rto a function must not only be declared, but also initialized to point to something. The only requirement is that its return type and parameter list match the return type and parameter list of pointer declaration.

```c
float square(float x);
float (*ptr)(float x);
float square(float x)
{
  return x * x;
}

ptr = square; // creates pointer to function square

answer = ptr(2.0);
```

You need to use parantheses around pointer name because indirection operator * has lower precedence than paranthese around parameter list.

[Pointer to function example](basics/ptrfunc.c)
[Call different functions using pointer](basics/ptrfunc2.c)
[How to pass pointer to function](basics/passptrfunc.c)

## Characters and Strings

Character can be initialized using single quotes (''). It can be printed using %c format specifier.

```c
char ch = 'a';
```

Character array initialization

```c
char string[10]; // 10 elements of char type.
char string[10] = {'A', '1', 'a', 'b', 'c', 'd', 'e', 'f', 'm', '\0'};
char string[10] = "Alabama";    // another method to initialize
```

[Character example](basics/chartest.c)

The null character ('\0') marks the end of character array or string.

```c
char *message = "Greate Caesar\'s Ghost!";
```

This is equivalent to

```c
char message[] = "Great Caesar\'s Ghost!";
```

This is compilation time memory allocation (when you know the memory requirements). If program has varying storage needs, depending on user input, you can use malloc() function to allocate storage space on the fly.

malloc() function takes number of bytes of memory needed. It returns an address and its return type is a pointer to type void. void pointer type is compatible with all data types. Memory allocated with malloc() can be used to store any of C's data types. malloc() function is in stdlib header file.

```c
#include <stdlib.h>
void *malloc(size_t size);
```

[Dynamic memory allocation](basics/mem_alloc.c)
[Taking input form user](basics/input.c)

## Structures

- collection of one or more variables grouped under a single name for easy manipulation. The variables in the structure can be of different types.

```c
// defining struct
struct coordinate {
  int x;
  int y;
}
```

initialize and create structures on the same statement.

```c
struct coordinate {
  int x;
  int y;
} first, second;
// creates two coordinate structs named first, second.
```

```c
struct coordinate {
  int x;
  int y;
};
struct coordinate first, second;
first.x = 50;
first.y = 100;
```

[Simple structure example](basics/simplestruct.c)

You can assign structs easily like `first = second;`

Initializing structures

```c
struct sale {
  char customer[20];
  char item[20];
  float amount;
} mysale = {
  "Acne Industries",
  "Left-handed widget",
  1000.00
};
```

For structures that contain another structure list the values in order.

```c
struct customer {
  char firm[20];
  char contact[25];
}

struct sale {
  struct customer buyer;
  char item[20];
  float amount;
} mysale = {
  {
    "Acne Industries",
    "George Adams"
  },
  "Left-handed widget",
  1000.00
};
```

[Structure example](basics/struct.c)
[Structure of arrays](basics/arraystruct.c)


### Structures and pointers

We can have pointers as structure members.

```c
struct data {
  int *value;
  int *rate;
} first;

first.value = &cost;    // first.value points to cost variable
first.rate = &interest;

*first.value;  // returns the value of cost variable.
```

```c
struct msg {
  char *p1;
  char *p2;
} myptrs;

myptrs.p1 = "Learn C with this tutorial";
myptrs.p2 = "Piyush Patel";

printf("%s", myptrs.p1);  // prints "Learn C with this tutorial"
```

- We can use strcpy(destination, source) to copy one string to another.

```c
strcpy(myptrs.p1, "Learn Java");
```

Using pointers, the memory is allocated dynamically, you don't have to specify how much space is required for this char array. That way, you can save on memory and also don't cause any trouble when you are trying to save string longer than allocated space.

[Array of structures](basics/records.c)

### Pointer to structures

We can create pointers to structures. They are useful when passing structure to a function. Linked list also uses this.

```c
struct part {
  short number;
  char name[10];
};
struct part *p_part;

struct part gizmo;

p_part = &gizmo;    // assigns the address of gizmo to p_part

// members can be accessed in two ways.
(*p_part).number = 100;
p_part -> number = 200;
part.number = 300;    // direct access without pointer
```

### Pointers and array of structures

```c
struct part {
  short number;
  char name[10];
};

struct part data[100];

struct part *p_part;
p_part = &data[0];

p_part = data;    // another way to assign address

// to point to the next element in data array we can simplly increment struct part pointer.
p_part++;   // now points to data[1]
printf("%d %s", p_part -> number, p_part -> name);
```

### Passing Structures to functions

We can easily create a pointer to structure and then pass that pointer to function to manipulate member variables.

[Pointer loop](basics/pointerloop.c)
See [Example](basics/structfunction.c)

## Unions

- similar to structures
- only one of its members can be used at a time.
- all the members of a union occupy the same area of memory. (This is memory efficient alternative to structures if you don't need to access all more than one member variable at the same time)

```c
union shared {
  char c;
  int i;
};
union shared s;
```

[Union example](basics/union.c)

```c
union shared {
  char c;
  int i;
} s;
```

We can also have a union inside a union. Check [this example](basics/union2.c).

## Typedef

We can use `typedef` keyword to create synonym for a structure or union type. For example, we can create synonym for structure as another name (coord).

```c
typedef struct {
  int x;
  int y;
} coord;

// Now you can use coord to create this struct variables.
// Here, you don't need to use struct at the beginning.
// coord becomes like one of the predefined data types.
coord topleft, bottomright;
```

## Scope

Scope refers to the extent to which different parts of a program have access to variable, where variable is visible.

[Example of Scope](basics/scope.c)

- An **external variable** is a variable defined outside of any function. They are also called global variables. The scope of such variables is entire program. When a function uses an external variable, it is good programming practice to declare the variable within the function using the `extern` keyword.

[extern Example](basics/extern.c)

A **local variable** is one that is defined within a function. The scope of such variables is limited to the function in which they are defined. Local variables are automatic by default.

**Static variables** are the one which hold the value even if you move to different function. They don't lose their value after the program is done with the function in which they are defined.

[Static variable example](basics/static.c)

Static external variables are visible to all functions in the same file and can be used by functions in its own file below its point of definition. External variable is viaible to all functions in the file and can be used by functions in other files.

- **Register variable** is used to suggest to compiler that an automatic local variable be stored in a processor register rather than in regular memory. You ask the processor to provide register for this variable and if the variable is not available then it will be treated as an ordinary variable. They are local to a function.

```c
void func(void)
{
  register int x;
  // additional statements
}
```

Variables can also be created inside a block. A block is formed when we use curly braces.

[Block example](basics/block.c)

## Streams

Streams is a sequence of bytes of data. A sequence of bytes flowing into a program is an input stream. This makes input/output programming device-independent. The program sees input/output as a continuous stream of bytes no matter where the input comes from or goes to.

C streams fall into two modes: text and binary. Text streams organized into lines, upto 255 characters, terminated by end-of-line or new line. A binary stream can handle all sorts of data. Binary streams are primarily used with disk files.

**Three standard streams
| Name | Streams | Device |
-------|:--------|:-------:|
|stdin | Standard input | Keyboard |
|stdout | Standard output | Screen |
|stderr | Standard error | Screen |

There are usually functions that use standard streams and functions that require stream name. printf() uses standard output stream whereas fprintf() requires stream name. puts() outputs string to standard output stream and fputs() requires stream name.

getchar() - get input from the stdin.

[getchar example](basics/getchar.c)
[buffer using getchar](basics/getchar2.c)

getch() - get input character from stdin. However, it doesn't echo the character to the stdout as we type them. So, we can't see what we typed. It is in conio.h header file.

[getch example](basics/getch.c)

getche() - similar to getch() except that it echoes input to the screen.

ungetc(int ch, FILE *fp) - unget a character. You can unget only a single character and cannot unget EOF at any time.

gets() - get string from input

char *fgets (char *str, int n, FILE *fp) - returns n number of characters from FILE pointer.

[fgets example](basics/fgets.c)

scanf() - get variable number of arguments. It takes different types of input from the stdin.

When you use scanf(), you need to clear the stdin because those characters which are not assigned to any variable are left in the stdin and will be assigned to next assignment. You can use gets() which can read from stdin up to the end of line.

[Clearing stdin](basics/clearing.c)

We can also use **fflush()** function to clear the buffer. fflush() is generally used with disk files

[fflush example](basics/clearing2.c)

You can also split the input of a number by using %2d or something like that.

For example,

```c
scanf("%2d%3d", &i, &j);
```

If we enter 54321 as input, then i = 54, j = 321.

putchar(int c) - print character

[putchar example](basics/putchar.c)
[Another putchar example](basics/putchar2.c)

putc() and fputc() sends a single character to a specified stream.

[puts example](basics/puts.c)

printf() and fprintf() are used to print formatted output. fprintf() is similar to printf(), except that you can specify the stream to which output is sent.

You can send error message to stderr stream by using fprintf()

```c
void error_message(char *msg)
{
  fprintf(stderr, msg);
}
error_message("An error has occured.");
```



**Table of Content**

1. [Helloworld](basics/hello.c)
2. [Age](basics/age_year.c)
3. [Constants](basics/const.c)
3. [PostIncrement and PreIncrement](basics/increment.c)
4. [If Else example](basics/agechecker.c)
5. [Function example](basics/cube.c)
6. [Room assignment char function](basics/roomassign.c)
7. [For loop](basics/forloop.c)
8. [While loop](basics/whileloop.c)
9. [Nested For loop](basis/nested_for.c)
10. [Recursion](basics/recursion.c)
11. [Printf function](basics/escape.c)
12. [Array example](basics/expenses.c)
13. [Multi-dimensional array](basics/scoring.c)
14. [Random Array](basics/randomarray.c)
15. [Basic Pointers](basics/pointer.c)
16. [Pointer types](basics/arraysize.c)
17. [Pointer arithmetic](basics/ptr_math.c)
18. [Pass Array to functions](basics/arraypass.c)
19. [Characters](basics/chartest.c)
20. [Memory Allocation](basics/mem_alloc.c)
21. [Taking input string](basics/input.c)
22. [Simple Structures](basics/simplestruct.c)
23. [Complex structures](basics/struct.c)
24. [Structure of arrays](basics/arraystruct.c)
25. [Array of structure](basics/arrayrecords.c)
26. [Looping through structure using pointer](basics/pointerloop.c)
27. [Passing Structure as argument to functions](basics/structfunction.c)
28. [Union example](basics/union.c)
29. [Union of union](basics/union2.c)
30. [Scope Example](basics/scope.c)
