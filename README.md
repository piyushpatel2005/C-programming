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

## Structures

- collection of one or more variables grouped under a single name for easy manipulation. The variables in the structure can be of different types.

```c
// defining struct
struct coordinate {
  int x;
  int y;
}
```

```c
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
20. [Characters](basics/chartest.c)
21. [Memory Allocation](basics/mem_alloc.c)
22. [Taking input string](basics/input.c)
23. [Simple Structures](basics/simplestruct.c)
24. [Complex structures](basics/struct.c)
25. [Structure of arrays](basics/arraystruct.c)
26. [Array of structure](basics/arrayrecords.c)
27. [Looping through structure using pointer](basics/pointerloop.c)
28. [Passing Structure as argument to functions](basics/structfunction.c)
29. [Union example](basics/union.c)
30. [Union of union](basics/union2.c)
