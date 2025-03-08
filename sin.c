#include <stdio.h>
#include <math.h>

#define WIDTH 70
#define HEIGHT 20

int main() {
    int x, y;
    double sin_val;

    // Draw the graph
    for (y = HEIGHT; y >= -HEIGHT; y--) {
        for (x = -WIDTH / 2; x <= WIDTH / 2; x++) {
            // Calculate sine value for the current x position
            sin_val = sin(x * M_PI / 180);  // Convert degrees to radians

            // Check if the current y position corresponds to the sine value
            if ((int)(sin_val * HEIGHT) == y) {
                printf("*");
            } else if (y == 0) {
                printf("-"); // X-axis
            } else if (x == 0) {
                printf("|"); // Y-axis
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
