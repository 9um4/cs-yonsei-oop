#include <iostream>

struct Earthquake {
    double latitude;
    double longitude;
    double magnitude;
};

int main() {
    Earthquake eq1;
    eq1.latitude = 37.7749;
    eq1.longitude = -122.4194;
    eq1.magnitude = 4.5;

    std::cout << "Latitude: " << eq1.latitude << std::endl;
    std::cout << "Longitude: " << eq1.longitude << std::endl;
    std::cout << "Magnitude: " << eq1.magnitude << std::endl;

    return 0;
}