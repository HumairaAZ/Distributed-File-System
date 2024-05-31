# Distributed Networked File System

## Overview
This project demonstrates the implementation and benchmarking of a basic distributed networked file system in C++. The main objectives are to write, read, and distribute files efficiently across multiple nodes.

## Implementation
The `DistributedFileSystem` class provides methods to write to and read from the storage, and to distribute files to different nodes.

### Files
- `src/distributed_fs.cpp`: Contains the implementation of the `DistributedFileSystem` class.
- `benchmarks/benchmark_distributed_fs.cpp`: Contains the benchmark tests.

## Running the Benchmarks
To compile and run the benchmarks, use the following commands:

```bash
g++ -o benchmark_distributed_fs benchmarks/benchmark_distributed_fs.cpp
./benchmark_distributed_fs 
