#include <stdio.h>

int main() {
    int posts[10];
    int i, maxDay = 0;
    float total = 0, average;
    int streakFound = 0;

    printf("Enter number of posts made each day for 10 days:\n");
    for (i = 0; i < 10; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &posts[i]);
        total += posts[i];
    }
    
    for (i = 1; i < 10; i++) {
        if (posts[i] > posts[maxDay]) {
            maxDay = i;
        }
    }
    average = total / 10.0;

    // Detect any streak of 3 consecutive increasing days
    for (i = 0; i < 8; i++) {
        if (posts[i] < posts[i + 1] && posts[i + 1] < posts[i + 2]) {
            streakFound = 1;
            break;
        }
    }
    // Display report
    printf("\n-------- Weekly Activity Summary --------\n");
    printf("Day\tPosts\n");
    printf("------------------\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\n", i + 1, posts[i]);
    }
    printf("------------------\n");
    printf("Highest Activity Day: Day %d (%d posts)\n", maxDay + 1, posts[maxDay]);
    printf("Average Daily Activity: %.2f posts/day\n", average);

    if (streakFound)
        printf("Streak Detected: YES\n");
    else
        printf("Streak Detected: NO\n");
    return 0;
}
