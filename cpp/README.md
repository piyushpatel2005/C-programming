# C++ Programming

C++ is strongly typed language with object-oriented feature. In C++, the functions are defined just like C language. in C++, the order of function declaration matters. To overcome this,we have to declare a function signature informing that there will be a function with this name down in the file.

```cpp
#include <iostream>
using namespace std;

int larger(int a, int b);

int main() {
  cout << "The bigger of 42 and 30 is " << larger(42,30) << endl;
}

int larger(a,b) {
  if (a > b) ? a : b
}
```

In C++, there is `cmath` library which provides functions like abs, ceil, floor, log10, max, min, etc. 

In C++, we have value semantics, which means if we pass primitive value to another function, it will have its own copy of that variable. However, it also support reference semantics, which means we are passing reference to that primitive variable and modifying that variable value in another function will modify value everywhere else it's used like in calling function.

```cpp
void grow(int& age) {
  age++;
  cout << "Grow age is " << age << endl;
}
int main() {
  int age = 20;
  cout << "main age is " << age << endl;
  grow(age);
  cout << "main age is " << age << endl;
}
```

This allows us to write some functions easily.

```cpp
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
```

We can make a function return two references. Modify two values and those will appear in main function using pass by reference.

```cpp
void datingRange(int age, int &min, int& max) {
  min = age / 2 + 7;
  max = (age - 7) * 2;
}
int main() {
  int young; 
  int old;
  datingRange(48, young, old);
  count << "A 48-year old could date someone from " << young << " to " << old << " years old." << endl;
}
```