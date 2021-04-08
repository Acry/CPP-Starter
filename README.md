# C++ GOTO

Simple C++ kickoff

Multi-paradigm: procedural, functional, object-oriented, generic, modular

Static, nominative, partially inferred

Filename extensions: .C, .cc, .cpp, .cxx, .c++, .h, .H, .hh, .hpp, .hxx, .h++

First appeared	1985;

Stable release	
C++20 (ISO/IEC 14882:2020) / 15 December 2020;

Preview release	
C++23 / 15 December 2020;

## Installing C++ on Arch-Linux

- gcc is both a C and C++ compiler.
It will look at the file's extension and process accordingly.
g++ is only a wrapper that calls gcc
g++ is installed with the gcc package in Arch

Compiler: GNU Compiler-Collection:  
`pacman -S gcc`

Arch Linux group `base-devel` might be an overkill.

https://archlinux.org/groups/x86_64/base-devel/
`sudo pacman -S base-devel`

## VSCode integration

    ms-vscode.cpptools

## Hello World

The Structure of a Basic C++ Program

```c++
// main.cpp
#include <cstdio>

int main(){
    printf("Hello, world!");
    return 0;
}
```

`make first`

or 

`g++ -o first first.cpp`

or

gcc file.C # uppercase .C (or .cpp) will process as C++ 
gcc file.c # lowercase .c will process as C

## The Compiler Tool Chain

Beside gcc, there are some more compilers like clang 
https://www.stroustrup.com/compilers.html
https://en.wikipedia.org/wiki/List_of_compilers#C++_compilers

The **preprocessor** performs basic source code manipulation.

For example, `#include <cstdio>` is a directive that instructs the preprocessor to include information about the cstdio library directly into your program’s source code. When the preprocessor finishes processing a source file, it produces a single translation unit. Each translation unit is then passed to the compiler for further processing.

The **compiler** reads a translation unit and generates an object file. 

Object files contain an intermediate format called object code. These files con-
tain data and instructions in an intermediate format that most humans wouldn’t understand. Compilers work on one translation unit at a time, so each translation unit corresponds to a single object file.

The **linker** generates programs from object files.

Linkers are also responsible for finding the libraries you’ve included within your source code. When you compile `first.cpp`, for example, the linker will find the cstdio library and include everything your program needs to use the `printf` function. Note that the cstdio header is dis tinct from the cstdio library. The header contains information about how to use the library.

## Make

## Projects

We don't use any scaffolding tools here.
You can write your own with Bash.

## Debugger

## The C++ Type System

C++ is an strongly typed, object-oriented language.

## Declaring Variables

int aNumber;

## Initializing a Variable

aNumber = 14;

## Conditional Statements

comparison operators
```c++
int main() {
    int x = 0;
    421 == x; // Equality
    421 != x; // Inequality
    1001 > x; // Greater than
    123 >= x; // Greater than or equal to
    -101 < x; // Less than
    -99 <= x; // Less than or equal to
}
```

An if statement contains a Boolean expression and one or more nested
statements.
```c++
if (boolean-expression) statement

if (boolean-expression) {
statement1;
statement2;
--snip--
}
```

## Branching

```c++
if (boolean-expression-1) statement-1
else if (boolean-expression-2) statement-2
else statement-3
```

## Functions

Functions are blocks of code that accept any number of input objects called
parameters or arguments and can return output objects to their callers.

Calling / invoking Functions


printf , which has a lineage that traces back to C

Another option is cout , which is part of the C++ standard library’s
iostream library.


## Comments

```c++
// This comment is on its own line

/*
* This is a comment
* That lives on multiple lines
* Don't forget to close
*/
```

## Types

Fundamental Types

integer, floating-point, character, Boolean, byte , size_t , and void . Some refer to fundamental types as primitive or built-in types because they’re part of the core language and almost always available to you.

int
float
character
boolean
std::byte <cstddef>
size_t <cstddef>
The type `size_t` is a C type in the <stddef> header, but it’s identical to the C++ version, which resides in the std namespace. Occasionally, you’ll see the (technically correct) construction std::size_t instead.

sizeof
The unary operator sizeof takes a type operand and returns the size (in
bytes) of that type. The sizeof operator always returns a size_t. For example,
sizeof(float) returns the number of bytes of storage a float takes.

## Arrays

## Classes

## Enum

## Unions

## Plain-Old-Data Classes

```c++
#include <cstdio>

struct Book {
char name[256]; u
int year; v
int pages; w
bool hardcover; x
};

int main() {
Book neuromancer;
neuromancer.pages = 271;
printf("Neuromancer has %d pages.", neuromancer.pages);
}

```

## Fully Featured Classes

Methods are member functions.
Access Controls
private

The class Keyword
You can replace the struct keyword with the class keyword, which declares
members private by default. Aside from default access control, classes declared
with the struct and class keywords are the same.


Constructors
 are special methods with special declarations.


```c++
struct ClockOfTheLongNow {
ClockOfTheLongNow() {
year = 2019;
}
--snip--
};

int main() {
ClockOfTheLongNow clock;
printf("Default year: %d", clock.get_year()); x
}
```

Destructor
cleanup function
The destructor is invoked
before an object is destroyed. Destructors are almost never called explic-
itly: the compiler will ensure that each object’s destructor is called as
appropriate.

struct Earth {
~Earth() { // Earth's destructor
printf("Making way for hyperspace bypass");
}
}

## Exceptions

Exceptions are types that communicate an error condition.
 exception handler 

```c++
if (x == 0xFACE) {
    throw std::runtime_error{ "exception" };
}
```
try-catch

```c++
try { 
    groucho.forget(0xC0DE);

} catch (const std::runtime_error &e) {
    printf("catching with message: %s\n", e.what());
}
```
## inheritance
```c++
struct Superclass {
    int x;
};

struct Subclass : Superclass {
    int y;
    int foo() {
    return x + y;
}
};
```


Polymorphic code is code you write once and can reuse with different types.

C++ offers two polymorphic approaches. Compile-time polymorphic code
incorporates polymorphic types you can determine at compile time. The
other approach is runtime polymorphism, which instead incorporates types
determined at runtime.

## Templates

C++ achieves compile-time polymorphism through templates.

A template is a class or function with template parameters. 

template<typename X, typename Y, typename Z> 
    struct MyTemplateClass {
        X foo(Y&);
    private:
        Z* member;
};

template<typename X, typename Y, typename Z>
X my_template_function(Y& arg1, const Z* arg2) {
--snip--
}


## links to online tools

https://wandbox.org/  
https://www.godbolt.org  

## refs

https://en.wikipedia.org/wiki/C%2B%2
https://code.visualstudio.com/docs/languages/cpp
https://code.visualstudio.com/docs/cpp/cpp-debug

