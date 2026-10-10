# Hello World in C

A collection of alternative ways to write and print **"Hello, World!"** using the C programming language.

This repository explores different C syntax, standard library functions, data representations, and programming techniques through one of the simplest programs possible.

## About the Project

The traditional Hello World program is usually written using a single `printf` call. However, C provides many other ways to produce the same output.

Although every example produces the same or a similar result, each implementation may use a different C feature or programming technique.

## Requirements

To compile the examples, you need a C compiler such as GCC or Clang.

## Getting Started

Clone the repository:

```bash
git clone https://github.com/EmrullahYarar/HelloWorld.git
cd HelloWorld
```

Compile an example with GCC:

```bash
gcc 1.c -o hello
```

Run it on Linux or macOS:

```bash
./hello
```

Run it on Windows:

```powershell
.\hello.exe
```

You can replace `1.c` with any numbered source file in the repository.

## Compiler Warnings

During development, additional compiler warnings can help identify potential problems:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic 1.c -o hello
```

## Contributing

If you know another interesting way to implement Hello World in C, feel free to contribute.

Please make sure that your implementation:

- Produces the expected output
- Compiles successfully
- Uses a different approach from the existing examples
- Includes clear and readable code

## Disclaimer

Some examples may intentionally use unconventional or overly complicated techniques for educational or experimental purposes.

These implementations are not necessarily recommended for production software.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Author

Created by [Emrullah Yarar](https://github.com/EmrullahYarar).
