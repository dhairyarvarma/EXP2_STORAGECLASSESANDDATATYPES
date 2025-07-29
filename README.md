# EXP2_STORAGECLASSESANDDATATYPES
# Experiment 2: Study of Data Types and Storage Classes in C++

---

## Aim

To study and implement various data types and storage classes in C++, analyze their memory usage, scope, and lifetime using programs, and understand their significance in structured programming.

---

## Tools Used
Visual Studio Code (VS Code)

---

## Objectives

- To learn the classification of data types in C++.
- To understand and implement the four main storage classes: `auto`, `register`, `static`, and `extern`.
- To explore the behavior of storage classes across multiple function calls.
- To determine memory size for various data types using the `sizeof()` operator.

---

## THEORY

### DATA TYPES IN C++

Data types specify the type of data that a variable can hold. C++ supports various types of data grouped as:

#### ➤ Primitive/Built-in Data Types:
| Data Type | Description               | Example           |
|-----------|---------------------------|-------------------|
| `int`     | Integer numbers           | `int a = 5;`      |
| `float`   | Single-precision decimal  | `float pi = 3.14;`|
| `double`  | Double-precision decimal  | `double g = 9.81;`|
| `char`    | Single character          | `char ch = 'A';`  |
| `bool`    | Boolean values            |`bool flag = true;`|
| `short`   | Shorter-range integer     | `short s = 1000;` |
| `long`    | Larger-range integer      | `long l = 123456;`|

#### ➤ Derived Data Types:
- Arrays, Functions, Pointers, References

#### ➤ User-defined Types:
- `struct`, `union`, `enum`, `class`

#### ➤ Void:
- Used for functions that do not return a value.

#### ➤ `sizeof()` Operator:
Used to determine the memory (in bytes) occupied by a variable or data type.
```cpp
cout << "Size of int: " << sizeof(int) << " bytes" << endl;
STORAGE CLASSES IN C++
Storage classes in C++ define the scope, visibility, lifetime, and default initial value of variables. There are four major storage classes:

1. auto
Scope: Local to the block

Lifetime: Until block execution ends

Default Value: Garbage (uninitialized)

Storage Location: Memory

Note: auto is redundant in modern C++ unless used with type deduction (auto x = 5;).

cpp
Copy
Edit
void func() {
    auto int a = 10;
    cout << a;
}
2. register
Scope: Local

Lifetime: Till block ends

Default Value: Garbage

Storage Location: CPU Register (if available)

Note: Address-of operator & cannot be used on register variables.

cpp
Copy
Edit
void fastLoop() {
    register int i;
    for(i = 0; i < 10; i++) {
        cout << i << " ";
    }
}
3. static
Scope: Local to the block

Lifetime: Entire program execution

Default Value: Zero

Storage Location: Static memory

Use: Retains value between multiple function calls.

cpp
Copy
Edit
void counter() {
    static int count = 0;
    count++;
    cout << count << endl;
}
4. extern
Scope: Global (across files)

Lifetime: Entire program

Default Value: Zero

Storage Location: Global memory

Use: Used to access a global variable declared in another file.

cpp
Copy
Edit
extern int globalVar;
void show() {
    cout << globalVar;
}
Execution Steps
Declare variables using each storage class.

Use sizeof() to display memory consumption of different data types.

Use function calls to demonstrate the lifetime and scope of static, auto, register, and extern variables.

Run the program and observe the outputs for multiple invocations of the function.

Sample Output
Sizeof

vbnet
Copy
Edit
Size of various datatypes
Integer: 4
Float: 4
Boolean: 1
Long Integer: 8
Short Integer: 2
Double: 8
Character: 1
STATIC

yaml
Copy
Edit
Address of func variable a : 0x7ffc5a2b3dfc
Size of variable           : 4
The variable is            : 1

Address of func variable a : 0x7ffc5a2b3dfc
Size of variable           : 4
The variable is            : 2

Address of func variable a : 0x7ffc5a2b3dfc
Size of variable           : 4
The variable is            : 3

The variable is            : 4
Address of global variable a : 0x601040
AUTO

less
Copy
Edit
Address of func variable a: 0x7ffeebfa7abc
Size of variable: 4
The variable is :10

Address of func variable a: 0x7ffeebfa7abc
Size of variable: 4
The variable is :10

Address of func variable a: 0x7ffeebfa7abc
Size of variable: 4
The variable is :10

The variable is :10
Address of global variable a: 0x601040
EXTERN

less
Copy
Edit
Address of func variable a: 0x601040
Size of variable: 4
The variable is :15

Address of func variable a: 0x601040
Size of variable: 4
The variable is :16

Address of func variable a: 0x601040
Size of variable: 4
The variable is :17

The variable is :17
Address of global variable a: 0x601040
REGISTER

csharp
Copy
Edit
Size of variable: 4
The variable is :99

Size of variable: 4
The variable is :99

Size of variable: 4
The variable is :99

The variable is :5
Address of global variable a: 0x601040
✅ Conclusion
Through this experiment, we successfully:

Explored different C++ data types and understood their memory usage.

Implemented all four major storage classes (auto, register, static, and extern) and analyzed their behavior.

Used the sizeof() operator to determine the size of variables in memory.

Understood how storage classes affect scope, lifetime, and memory location.

Observed the persistence of static variables and limitations of register variables.

Practiced modular programming concepts using extern to access global variables across different files.

This experiment reinforces the core C++ concepts that help in writing efficient, maintainable, and performance-optimized programs.

📎 References
C++ Documentation – cppreference.com

Programming textbooks and lecture slides used in the course.

Instructor's notes and lab manuals.

