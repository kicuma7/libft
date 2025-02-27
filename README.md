# Libft

Libft is a custom C language library developed as part of the 42 School curriculum. It provides implementations of various standard C library functions, along with additional functions for handling linked lists and strings.

---

## Installation

To compile the library, simply run:

```sh
make
```

This will generate the `libft.a` static library, containing all implemented functions.

To clean object files:

```sh
make clean
```

To remove the compiled library as well:

```sh
make fclean
```

To recompile from scratch:

```sh
make re
```

---

## Usage

To use `libft.a` in your project, include it in your compilation process:

```sh
gcc -Wall -Wextra -Werror my_program.c -L. -lft -o my_program
```

And in your code, include the library header:

```c
#include "libft.h"
```

---

## Implemented Functions

The library is organized into the following modules:

### 📌 Memory Allocation

- `ft_calloc`

### 🔢 Conversion

- `ft_atoi`
- `ft_itoa`

### 🖊 Output to File Descriptor

- `ft_putchar_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`
- `ft_putstr_fd`

### 🔎 Character Testing

- `ft_isalnum`
- `ft_isalpha`
- `ft_isascii`
- `ft_isdigit`
- `ft_isprint`

### 🔄 Linked List Manipulation

- `ft_lstadd_back`
- `ft_lstadd_front`
- `ft_lstclear`
- `ft_lstdelone`
- `ft_lstiter`
- `ft_lstlast`
- `ft_lstmap`
- `ft_lstnew`
- `ft_lstsize`

### 🛠 Memory Manipulation

- `ft_bzero`
- `ft_memchr`
- `ft_memcmp`
- `ft_memcpy`
- `ft_memmove`
- `ft_memset`

### 🔤 String Manipulation

- `ft_split`
- `ft_strchr`
- `ft_strdup`
- `ft_striteri`
- `ft_strjoin`
- `ft_strlcat`
- `ft_strlcpy`
- `ft_strlen`
- `ft_strmapi`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strrchr`
- `ft_strtrim`
- `ft_substr`

### 🔄 Letter Conversion

- `ft_tolower`
- `ft_toupper`

---

## Project Structure

```
Libft/
├── src/
│   ├── alloc/
│   ├── conver/
│   ├── fd/
│   ├── is/
│   ├── lst/
│   ├── mem/
│   ├── str/
│   ├── to/
├── obj/
├── libft.h
├── libft.a
├── Makefile
└── README.md
```

---

## 📜 License

This project was developed as part of the **42 curriculum** and is freely available for study and improvement. Feel free to use it for your learning. 🚀

