# Hash Tables Readme

This repository contains C programs implementing basic and advanced functionalities of hash tables. Hash tables are essential data structures for efficient key-value pair storage and retrieval. The provided programs include functions for creating hash tables, implementing hash functions, setting and retrieving key-value pairs, printing hash tables, and deleting them.

## Files and Directories

# 1. 0-hash_table_create.c
    - Contains the function `hash_table_create` that creates a hash table.

# 2. 1-djb2.c
    - Implements the djb2 hash function using the algorithm provided.

# 3. 2-key_index.c
    - Implements the function `key_index` to get the index of a key in the hash table array.

# 4. 3-hash_table_set.c
    - Implements the function `hash_table_set` to add an element to the hash table.

# 5. 4-hash_table_get.c
    - Implements the function `hash_table_get` to retrieve a value associated with a key.

# 6. 5-hash_table_print.c
    - Implements the function `hash_table_print` to print the hash table.

# 7. 6-hash_table_delete.c
    - Implements the function `hash_table_delete` to delete a hash table.

# 8. 100-sorted_hash_table.c
    - Contains advanced functions using sorted hash tables, including creating, setting, getting, printing, and deleting.

## Compilation and Execution

To compile the provided programs, use the following syntax:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <other_files.c> -o <output_executable>
```

Replace `<main_file.c>` with the main file for a specific task, `<other_files.c>` with the required source files, and `<output_executable>` with the desired name for the executable.

## Example Execution

Here is an example of compiling and running a program:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
./a
```

## Testing

The repository includes test files (e.g., `0-main.c`, `1-main.c`, etc.) for each task. You can compile the main file with the required source files to test the functionality of each task.

## Advanced Task

The file `100-sorted_hash_table.c` contains advanced functions using sorted hash tables. These functions implement features such as creating a sorted hash table, setting key-value pairs in sorted order, getting values, printing, and deleting the sorted hash table.

## Contributing

Feel free to contribute to the repository by providing improvements, bug fixes, or additional functionalities. Create a pull request, and it will be reviewed.

Happy coding!
KO
Lana Samson 🚀