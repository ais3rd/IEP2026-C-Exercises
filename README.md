# IEP2026 C Exercises

Introductory C programming exercises from the 2026 IEP course in Biomedical Engineering at Universitas Indonesia.

## Contents
| File | Topic |
|---|---|
| `prog1.c` | `printf` and escape sequences (`\n`, `\t`, `\r`) |
| `prog2.c` | Variables, input and grading with `if`/`else if` |
| `prog3.c` | Checks whether a number is positive, negative or zero |
| `Ex2.c` | Arithmetic on two integers (`+ - * /`) |
| `Ex3.c` | Calculator with an operator as input, plus a divide-by-zero check |
| `Ex4.c` | Prints leap years from 1 to 2100 |
| `Ex5.c` | Average of two integers |
| `Ex6.c` | Average, maximum and minimum of 10 numbers stored in an array |
| `joko.c` | Practice version of Ex6 |
| `jaja.c` | Array initialization in ascending and descending order |

## Build and run
```bash
gcc Ex2.c -o Ex2.exe
Ex2.exe
```

> `Ex6.c` and `joko.c` are missing a `;` after `printf("Input number %d", i)`, so add it before compiling.
