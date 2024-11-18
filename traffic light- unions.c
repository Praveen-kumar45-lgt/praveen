#include <stdio.h>
struct light {
    unsigned int red : 1; // 1 bit for power (ON/OFF)
    unsigned int yellow : 2; // 2 bits for mode (0-3)
    unsigned int green : 1; // 1 bit for error status
};
int main() {
    struct light trafficlight = {0, 0, 0};
    // Set the power ON
    trafficlight.red = 1;
    // Set the mode to 3
    trafficlight.yellow = 3;
    // Indicate an error
    trafficlight.green = 1;
    printf("red: %u, yellow: %u, green: %u\n",
           trafficlight.red, trafficlight.yellow, trafficlight.green);
    // Toggle the power OFF
    trafficlight.red = 0;
    printf("red: %u\n", trafficlight.red);
    return 0;
}

