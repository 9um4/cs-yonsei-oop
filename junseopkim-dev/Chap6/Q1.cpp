#include <iostream>

using namespace std;

struct Earthquake {
    double latitude;
    double longitude;
    double magnitude;
};


int main()
{
    Earthquake eq1;
    eq1.latitude = 37.7749;
    eq1.longitude = -122.4194;
    eq1.magnitude = 4.5;

    cout << "Latitude: " << eq1.latitude << endl;
    cout << "Longitude: " << eq1.longitude << endl;
    cout << "Magnitude: " << eq1.magnitude << endl;

    return 0;
}