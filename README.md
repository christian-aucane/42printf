*This project has been created as part of the 42 curriculum by caucane*

# 🖨️ ft_printf — Custom Implementation of printf

## 📘 Description

**ft_printf** is a core project of the 42 curriculum.  
It consists of recreating the standard C `printf` function with a selected set of format specifiers.

This project introduces:
- variadic functions using `va_list`,
- formatted output handling,
- conversion parsing and dispatching,
- low-level character-by-character printing.

The goal is to mimic the real `printf` as closely as possible.

---

## ⚙️ Instructions

### 🔧 Build the library
```bash
make
```
This will create the static library:
```bash
libftprintf.a
```
### 🧩 Usage

- Include the header in your source file:
```c
#include "ft_printf.h"
```
- Compile your program with the library:
```bash
cc main.c -L. -lftprintf -o my_program
```

### 🧹 Useful Makefile commands
```bash
make clean      # Remove object files (*.o)
make fclean     # Remove object files and libftprintf.a
make re         # Rebuild everything
```
## 🎯 Supported Conversions
| Conversion | Description                              |
| ---------- | ---------------------------------------- |
| `%c`       | Print a single character                 |
| `%s`       | Print a string                           |
| `%p`       | Print a pointer in hexadecimal (`0x...`) |
| `%d`       | Print a signed integer                   |
| `%i`       | Same as `%d`                             |
| `%u`       | Print an unsigned integer                |
| `%x`       | Print a number in lowercase hexadecimal  |
| `%X`       | Print a number in uppercase hexadecimal  |
| `%%`       | Print the `%` character                  |


## 📌 File Overview

### 🧠 Core
| File | Description |
|------|-------------|
| `ft_printf.c` | Main function. Parses the format string, manages the variadic arguments, and dispatches to handlers. |

### 🛠️ Handlers (`handlers/`)
| File | Description |
|------|-------------|
| `handle_char.c` | Handles `%c` conversion. |
| `handle_string.c` | Handles `%s` conversion. |
| `handle_ptr.c` | Handles `%p` conversion (nil + 0x...). |
| `handle_int.c` | Handles `%d` and `%i` signed integers. |
| `handle_uint.c` | Handles `%u` unsigned integers. |
| `handle_hex.c` | Handles lowercase hexadecimal `%x`. |
| `handle_hex_upper.c` | Handles uppercase hexadecimal `%X`. |
| `handle_percent.c` | Handles literal `%%`. |

### 📚 Headers (`includes/`)
| File | Description |
|------|-------------|
| `ft_printf.h` | Public header containing the ft_printf prototype. |
| `handlers.h` | Declarations for all handler functions. |
| `utils.h` | Declarations for utility printing functions. |

### 🔧 Utilities (`utils/`)
| File | Description |
|------|-------------|
| `ft_putchar.c` | Low-level character output using `write()`. |
| `ft_putstr.c` | Prints null-terminated strings. |
| `ft_putnbr.c` | Prints signed integers. |
| `ft_putnbr_base.c` | Converts numbers into any base (used for hex). |
| `ft_putnbr_ptr.c` | Specific base printing for pointers (uintptr). |

## 🧪 Ressources
- 🔍 Printf Tester (Tripouille)
https://github.com/Tripouille/printfTester
- man printf
https://linux.die.net/man/3/printf

## 📝 Notes & Requirements

- Must comply with the 42 Norm.
- Only the write() function is allowed.
- Undefined behavior must be avoided.
- Pointers must print exactly:
    - (nil) when the pointer is NULL
    - 0x... followed by lowercase hexadecimal for valid pointers

🏫 Author: caucane

🖋️ Language: C

🧾 Norm: 42 Norminette compliant

🧰 Project: ft_printf — 42 Core Curriculum

