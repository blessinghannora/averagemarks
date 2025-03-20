#include <stdio.h>

int main() {
    // Variables to store marks
    double physics[4], chemistry[4], mathematics[4];
    double sum_physics = 0, sum_chemistry = 0, sum_mathematics = 0;
    double avg_physics, avg_chemistry, avg_mathematics, overall_average;
    char *tests[] = {"Assignment", "Coursework", "Midterm", "End of Term"};

    // Input marks for Physics
    printf("Enter marks for Physics:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: ", tests[i]);
        scanf("%lf", &physics[i]);
        sum_physics += physics[i];
    }

    // Input marks for Chemistry
    printf("\nEnter marks for Chemistry:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: ", tests[i]);
        scanf("%lf", &chemistry[i]);
        sum_chemistry += chemistry[i];
    }

    // Input marks for Mathematics
    printf("\nEnter marks for Mathematics:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: ", tests[i]);
        scanf("%lf", &mathematics[i]);
        sum_mathematics += mathematics[i];
    }

    // Calculate averages
    avg_physics = sum_physics / 4;
    avg_chemistry = sum_chemistry / 4;
    avg_mathematics = sum_mathematics / 4;

    // Calculate overall average
    overall_average = (avg_physics + avg_chemistry + avg_mathematics) / 3;

    // Display results
    printf("\nAverage Marks per Subject:\n");
    printf("Physics: %.2lf\n", avg_physics);
    printf("Chemistry: %.2lf\n", avg_chemistry);
    printf("Mathematics: %.2lf\n", avg_mathematics);
    printf("\nOverall Average Marks: %.2lf\n", overall_average);

    return 0;
}

