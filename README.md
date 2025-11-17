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

## 🧩 Project Structure
### 📂 Core
| File                           | Description                                 |
| ------------------------------ | ------------------------------------------- |
| [`ft_printf.c`](./ft_printf.c) | Main function, handles parsing and dispatch |
| [`handlers.c`](./handlers.c)   | Global conversion handler                   |
| `handlers_*.c`                 | Specific handlers for each conversion       |

### 🔧 Utils
| File                                                   | Description                |
| ------------------------------------------------------ | -------------------------- |
| [`ft_putchar.c`](./utils/ft_putchar.c)                 | Print a single character   |
| [`ft_putstr.c`](./utils/ft_putstr.c)                   | Print a string             |
| [`ft_putnbr.c`](./utils/ft_putnbr.c)                   | Print a signed number      |
| [`ft_putnbr_unsigned.c`](./utils/ft_putnbr_unsigned.c) | Print an unsigned number   |
| [`ft_putnbr_base.c`](./utils/ft_putnbr_base.c)         | Print a number in any base |
| [`ft_putnbr_ptr.c`](./utils/ft_putnbr_ptr.c)           | Handle pointer conversion  |

## 🧪 Recommended Testers
- 🔍 Printf Tester (Tripouille)
https://github.com/Tripouille/printfTester

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
