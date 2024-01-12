#include <stdio.h>

int main() {
    int x, y;

    // Input the x and y coordinates
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    // Check the coordinates and print the appropriate message
    if (x == 0 && y == 0) {
        printf("The point (0,0) is at the origin.\n");
    } else if (x == 0) {
        printf("The point is on the y-axis.\n");
    } else if (y == 0) {
        printf("The point is on the x-axis.\n");
    } else {
        // Determine the quadrant or axis
        if (x < 0 && y > 0) {
            printf("The point gives -xy.\n");
        } else if (x < 0) {
            printf("The point gives -x.\n");
        } else {
            // Determine the quadrant
            if (x > 0 && y > 0) {
                printf("The point is in Quadrant I.\n");
            } else if (x < 0 && y > 0) {
                printf("The point is in Quadrant II.\n");
            } else if (x < 0 && y < 0) {
                printf("The point is in Quadrant III.\n");
            } else {
                printf("The point is in Quadrant IV.\n");
            }
        }
    }

    return 0;
}
