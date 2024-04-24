#include <iostream>

using namespace std;

struct Physique {
    int weight;
    int height;
};

int main()
{
    Physique David = {70, 175};

    cout << "David's weight: " << David.weight << "kg" << endl;
    cout << "David's height: " << David.height << "cm" << endl;
    
    return 0;
}

