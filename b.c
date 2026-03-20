#include <stdio.h>

int main() {
    float scores[4][5];
    float *p[4];
    int i, j, num;

    for (i = 0; i < 4; i++) {
        p[i] = scores[i];
    }

    printf("Please enter the grades of 5 courses for 4 students:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%f", &p[i][j]);
        }
    }

    do {
        printf("Please enter the student number to be queried (0 - 3): ");
        scanf("%d", &num);
        if (num < 0 || num > 3) {
            printf("Invalid input number. Please enter again!\n");
        }
    } while (num < 0 || num > 3);

    printf("All the grades of this student are:\n");
    for (j = 0; j < 5; j++) {
        printf("%.2f ", p[num][j]);
    }
    printf("\n");

    return 0;
}
