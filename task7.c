#include <stdio.h>

int main() {
    float mileage[8];
    int i;
    int count = 0;

    printf("Enter mileage (km per litre) for 8 vehicles:\n");
    for (i = 0; i < 8; i++) {
        printf("Vehicle %d: ", i + 1);
        scanf("%f", &mileage[i]);
    }

    // Display report
    printf("\nVehicle\tMileage\t\tCategory\n");
    printf("--------------------------------------\n");

    for (i = 0; i < 8; i++) {
        printf("%d\t%.2f\t\t", i + 1, mileage[i]);

        if (mileage[i] >= 18) {
            printf("Efficient\n");
        } else if (mileage[i] >= 12 && mileage[i] < 18) {
            printf("Average\n");
        } else {
            printf("Needs Maintenance\n");
            count++;
        }
    }

    printf("--------------------------------------\n");

    // Check for fleet efficiency alert
    if (count > 3) {
        printf("Fleet Efficiency Alert!\n");
    } else {
        printf("Fleet Operating Normally.\n");
    }

    return 0;
}
