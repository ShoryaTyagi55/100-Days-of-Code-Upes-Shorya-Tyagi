
#include <stdio.h>

// Q132: Display traffic light instructions using enum

enum TrafficLight {
    RED, YELLOW, GREEN
};

int main() {
    enum TrafficLight light;

    light = RED;
    printf("Stop\n");

    light = YELLOW;
    printf("Wait\n");

    light = GREEN;
    printf("Go");

    return 0;
}
