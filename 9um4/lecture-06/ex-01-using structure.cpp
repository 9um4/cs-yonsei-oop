#include <iostream>

struct Physique {
    int weight;
    int height;
};

int main() {
    Physique David = {70, 175};

    std::cout << "Weight: " << David.weight << std::endl;
    std::cout << "Height: " << David.height << std::endl;

    return 0;
}