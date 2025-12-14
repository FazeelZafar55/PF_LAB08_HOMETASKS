#include <stdio.h>

int main(){
    int fees[15], delay[15], fine[15];
    int totalFine = 0, i;
    
    printf("Enter fee payment status for 15 students (0 = Not Paid, 1 = Paid):\n");
    for (i = 0; i < 15; i++) {
        printf("Student %d status: ", i + 1);
        scanf("%d", &fees[i]);
        while (fees[i] != 0 && fees[i] != 1) {
            printf("Invalid input! Enter 0 for Not Paid or 1 for Paid: ");
            scanf("%d", &fees[i]);
        }

        // If fee is paid, delay = 0 automatically
        if (fees[i] == 1) {
            delay[i] = 0;
        } else {
            printf("Enter delay in months for student %d: ", i + 1);
            scanf("%d", &delay[i]);
        }
    }

    // Fine calculation
    for (i = 0; i < 15; i++) {
        if (fees[i] == 1) {
            fine[i] = 0;
        } else {
            if (delay[i] == 1)
                fine[i] = 500;
            else if (delay[i] >= 2)
                fine[i] = 1000;
            else 
                fine[i] = 0;
        }
        totalFine += fine[i];
    }

    // DISPLAY REPORT
    printf("\nStudent\tStatus\t\tDelay\tFine\tRemarks\n");
    printf("-----------------------------------------------------\n");

    for (i = 0; i < 15; i++) {
        printf("%d\t", i + 1);
        if (fees[i] == 1)
            printf("Paid\t\t");
        else 
            printf("Not Paid\t");
        printf("%d\t%d\t", delay[i], fine[i]);

        if (fees[i] == 1)
            printf("Cleared\n");
        else   
            printf("Defaulter\n");
    }

    printf("-----------------------------------------------------\n");
    printf("Total Fine Collected: %d\n", totalFine);

    return 0;
}
