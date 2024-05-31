// src/distributed_fs.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

class DistributedFileSystem {
private:
    std::map<std::string, std::vector<char>> storage;

public:
    void writeFile(const std::string& filename, const std::vector<char>& data) {
        storage[filename] = data;
    }

    std::vector<char> readFile(const std::string& filename) {
        return storage[filename];
    }

    void distributeFile(const std::string& filename, const std::vector<std::string>& nodes) {
        // Simulate distribution to different nodes
        for (const auto& node : nodes) {
            std::cout << "Distributing file " << filename << " to node " << node << std::endl;
        }
    }
};

int main() {
    DistributedFileSystem dfs;
    std::string filename = "example.txt";
    std::vector<char> data = {'H', 'e', 'l', 'l', 'o', ' ', 'D', 'F', 'S'};

    dfs.writeFile(filename, data);
    std::vector<char> readData = dfs.readFile(filename);

    std::cout << "Read data: ";
    for (char c : readData) {
        std::cout << c;
    }
    std::cout << std::endl;

    dfs.distributeFile(filename, {"node1", "node2", "node3"});

    return 0;
}
