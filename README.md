# ft_printf

**ft_printf** is a custom implementation of the standard C library function `printf`. This project was developed as part of the 42 curriculum to demonstrate mastery of variadic functions, string manipulation, and formatted output handling. It replicates much of the functionality of `printf` while adhering to strict project guidelines.

---

## Features

- Supports conversion specifiers:
  - **`%c`**: Character
  - **`%s`**: String
  - **`%p`**: Pointer address
  - **`%d`**, **`%i`**: Signed integer
  - **`%u`**: Unsigned integer
  - **`%x`**, **`%X`**: Hexadecimal (lowercase/uppercase)
  - **`%%`**: Percent sign
- Handles flags and precision:
  - Width, precision, and zero-padding.
- Supports variadic arguments using `va_list`.
- Mimics standard `printf` behavior closely.

---

## Technologies Used

- **Language**: C
- **Standard Library Functions**: Limited to project-permitted functions like `write`.
- **Makefile**: For automated compilation.
- **Testing**: Compatible with standard and custom test cases.

---

## How to Use

### Prerequisites

- A Unix-based system (Linux or macOS).
- A C compiler (e.g., `gcc`).

### Steps

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ft_printf.git
   cd ft_printf
2. Compile the library
   ```bash
   make
3. Include `ft_printf` in your project
   - Add `libftprintf.a` to your project compilation:
     ```bash
     gcc -Wall -Wextra -Werror main.c libftprintf.a -o your_program
4. Use `ft-printf` in your code
   ```bash
   #include "ft_printf.h"
    int main(void)
    {
      ft_printf("Hello, %s! The number is %d.\n", "world", 42);
      return (0);
    }

---

## How It Works

1. Parses the format string for conversion specifiers (e.g., `%d`, `%s`).
2. Processes each specifier by:
    - Validating its format.
    - Extracting and formatting the corresponding argument from the variadic list.
3. Writes the formatted output to the standard output (`stdout`) using `write`.

---

## Project Rules

- Reimplementation of printf using only project-allowed standard library functions.
- All code must follow 42's Norminette coding standard.
- Properly handle edge cases like null pointers and precision formatting.

---

## License

This project is for educational purposes under the 42 Network. Redistribution is prohibited without prior authorization.
