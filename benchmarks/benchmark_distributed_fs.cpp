// benchmarks/benchmark_distributed_fs.cpp
#include "distributed_fs.cpp"
#include <iostream>
#include <chrono>
#include <vector>

void benchmarkDistributedFileSystem() {
    DistributedFileSystem dfs;
    std::string filename = "benchmark.txt";
    std::vector<char> data(1024 * 1024, 'D'); // 1MB of data
    std::vector<std::string> nodes = {"node1", "node2", "node3"};

    auto start = std::chrono::high_resolution_clock::now();
    dfs.writeFile(filename, data);
    dfs.distributeFile(filename, nodes);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Benchmark Time: " << duration.count() << " seconds" << std::endl;
}

int main() {
    benchmarkDistributedFileSystem();
    return 0;
}
