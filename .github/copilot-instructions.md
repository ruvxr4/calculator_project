# Copilot Instructions for CPE Learning Project

## Project Overview

This is a C/C++ learning project for engineering coursework (CPE). The codebase contains:
- **engce117/** - Assignments and labs for ENGCE 117 course (research labs with `rlab` prefix)
- **hw/** - Homework assignments (labs with `lab` prefix)
- **test.cpp** - Testing file (currently empty)

## Code Structure & Patterns

### Standard C Program Template
All programs follow a consistent structure:
1. Include `<stdio.h>` for I/O operations
2. Forward function declarations at the top
3. `main()` function with basic I/O logic
4. Helper functions following main

**Example patterns:**
- `rlab1.1.cpp` - Pointer manipulation and printing
- `rlab2.1.cpp` & `rlab2.2.cpp` - String reversal (both passing arrays and using static arrays)
- `lab1.1.cpp` - Input validation with functions taking pointers

### Key Coding Conventions

1. **Pointer Usage**: Functions commonly accept pointers for pass-by-reference
   - `void function(int *value)` for modification
   - `void function(char str[])` for string operations
   
2. **String Handling**: Uses C-style null-terminated strings with manual iteration
   - Loop until `'\0'` sentinel: `for(i = 0; str[i] != '\0'; i++)`
   - Example: `rlab2.1.cpp`, `rlab2.2.cpp`

3. **Static Variables**: Used to preserve data between function calls
   - See `rlab2.2.cpp` line 18: `static char str2[50];`
   - Common when returning local array pointers

4. **Input Handling**: Uses `scanf()` with validation checking
   - Check return value: `if (scanf("%d", &variable) != 1)` signals parsing error

5. **Function Organization**: 
   - Helper functions use clear prefixes (e.g., `print_`, `check_`)
   - Parameter names are descriptive (e.g., `*times`, `*checkposnum`)

## Build & Execution

- Programs are compiled individually using the terminal/IDE build system
- Output stored in `output/` subdirectories within each folder
- No build system or Makefile present; single-file compilation

## File Naming Conventions

- `rlab#.#.cpp` - Research labs for ENGCE 117 (numbered by chapter and assignment)
- `lab#.#.cpp` - Homework labs
- Numbered sequentially by topic/week, not alphabetically

## When Implementing New Code

1. Follow the standard C template structure
2. Use pointer parameters for functions that modify data
3. Include input validation for `scanf()` operations
4. Use clear, descriptive function and variable names
5. Add comments for non-obvious logic (especially loop bounds and sentinel conditions)
6. Place helper functions after main
7. Use `printf()` for output
