# Merging Two Dynamic Arrays into One (C)

A CLI utility written in pure C that dynamically allocates and reads two separate integer arrays of arbitrary lengths, merges them sequentially into a single newly allocated array via pointer reference, and prints the result.

## Features

- **Double Pointer Output (`int **`):** Allocates memory for the merged result inside the function and returns it safely to the caller through pointer reference.
- **Dynamic Memory Allocation:** Handles arbitrary sizes for both input arrays using `malloc` and `free`.
- **Strict Input Validation:** Ensures all dimension inputs are strictly positive (`> 0`) and verifies input format integrity.
- **Leak-Free:** Properly frees all allocated memory across all execution paths and failure branches (verified via Valgrind).

## Principle

Given array A of length $N$ and array B of length $M$:
- The resulting merged array has length $N + M$.
- Elements from array A occupy indices $0$ to $N - 1$.
- Elements from array B occupy indices $N$ to $N + M - 1$.

## How to Build and Run

### 1. Compilation
Compile using GCC with strict standard flags:
```bash
gcc -Wall -pedantic -g spojeniDvouPoliDojednoho.c -o merge_arrays
```

### 2. Execution
```bash
./merge_arrays
```

### 3. Memory Leak Check (Valgrind)
```bash
valgrind --leak-check=full --show-leak-kinds=all ./merge_arrays
```

## Example Usage

```text
Zadejte delku prvniho pole:
3
Zadejte prvky prvniho pole:
10 20 30
Zadejte delku druheho pole:
2
Zadejte prvky druheho pole:
40 50
10 20 30 40 50
```
