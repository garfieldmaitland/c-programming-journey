# C Programming Style Guide

My personal coding standards for consistency and readability.

## Naming Conventions


### GitHub Repository Names
- Use `kebab-case` (most popular repos use kebab-case)
- Keep names descriptive and discoverable
- Use lowercase throughout
- Examples: `c-programming-journey`, `data-structures-in-c`, `personal-shell`


### Branch Naming
- Use `kebab-case`
- Format: `type/description`
- Examples:
  - `feature/add-linked-list`
  - `fix/memory-leak-parser`
  - `docs/update-readme`


### Directories
- Use `snake_case`
- Keep names descriptive but concise
- Examples: `add_program`, `linked_list`, `file_parser`


### Markdown Files
- Use `kebab-case` (most common)
- Keep names descriptive but concise
- README.md is a special case (all caps by tradition)
- Examples: `getting-started.md`, `api-reference.md`, `installation-guide.md`


### Source Files
- Use `snake_case`
- Match the directory name when possible
- Extension: `.c` for source, `.h` for headers
- Examples: `add_program.c`, `linked_list.c`, `linked_list.h`


### Executables
- Use `snake_case`
- Usually match the source file name (without the extension)
- Examples: `add_program`, `linked_list`, `file_parser`


### Functions
- Use `snake_case`
- Use descriptive verb phrases
- Examples: `add_numbers()`, `calculate_average()`, `print_result()`


### Variables
- Use `snake_case`
- Use descriptive nouns
- Examples: `total_sum`, `user_input`, `array_size`


### Constants and Macros
- Use `SCREAMING_SNAKE_CASE`
- Examples: `MAX_SIZE`, `DEFAULT_VALUE`, `PI`


### Structs and Custom Types
- Use `PascalCase`
- Example: `StudentRecord`, `Node`, `FileBuffer`
- Note: I will revisit this convention. I know Linus Torvalds has an opinion on this and other projects have another opinion


## Resources
- K&R "The C Programming Language" conventions
- Linux kernel style guide (for reference)
- NASA C Style Guide (for safety-critical code patterns)


## Evolution
This guide will evolve as I learn more. Last updated: December 16 2024
