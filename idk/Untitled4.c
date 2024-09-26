#include<iostream>
using namespace std;
// Function to calculate speed
double calculateSpeed(double distance, double time) {
    return distance / time;
}

int main() {
    double distance = 100.0;
    double time = 2.5;
    double speed = calculateSpeed(distance, time);

    std::cout << "Speed: " << speed << " units per time unit" << std::endl;

    return 0;
}
