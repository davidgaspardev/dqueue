# DQueue

The DQueue provides a simple and effective implementation of a dynamic queue data structure in C.

## Overview

A queue is a linear data structure where the first element is inserted from one end called the **REAR** and the deletion of the existing element is done from the other end called as **FRONT**. This project provides a dynamic queue implementation using linked list, where both insertion (*enqueue*) and deletion (*dequeue*) operations are performed in constant time.

## DQueue Operations

The following table demonstrates a sequence of operations on a DQueue:

| Operation           | Return  | Queue      |
|---------------------|---------|------------|
| create()            | ***dq** | `[]`       |  
| enqueue(**dq**, 8)  |         | `[8]`      |
| enqueue(**dq**, 4)  |         | `[8,4]`    |
| dequeue(**dq**)     | 8       | `[4]`      |
| enqueue(**dq**, 7)  |         | `[4,7]`    |
| enqueue(**dq**, 16) |         | `[4,7,16]` |
| size(**dq**)        | 3       | `[4,7,16]` |
| dequeue(**dq**)     | 4       | `[7,16]`   |
| peek(**dq**)        | 7       | `[7,16]`   |
| dequeue(**dq**)     | 7       | `[16]`     |
| dequeue(**dq**)     | 16      | `[]`       |
| dequeue(**dq**)     | ERROR   | `[]`       |
| empty(**dq**)       | true    | `[]`       |

## Features

- Dynamic Allocation: Elements are stored using dynamically allocated nodes. This ensures efficient use of memory.

- Primary Operations:
    - `enqueue`: Add an element to the end of the queue.
    - `dequeue`: Remove and return the element from the front of the queue.
    - `peek`: View the front-most element without removing it.

- Utility Functions:
    - `size`: Get the number of elements in the queue.
    - `empty`: Check if the queue is empty.
    - `destroy`: Free all memory used by the queue.

## Getting Started

### Prerequisites
A C compiler (the provided Makefile uses clang)

```bash
$ make build
```

This will compile the source files and generate object files.

```bash
$ make test
$ ./bin/test
```

Follow the menu instructions to perform enqueue operations and observe the queue behavior.

## Usage

To use this dynamic queue in your own projects, include the `queue.h` header and link against the provided library.

Contribute
Feel free to dive in! Open an issue or submit PRs.

License
This project is open source and available under the MIT License.

## License

This project is open source and available under the [MIT License](./LICENSE).
