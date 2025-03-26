#include <stdio.h>

int main() {
    int n, m;

    // Get the number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &n);

    char domestic[n][50]; // Array to store domestic animals

    // Input domestic animals
    printf("Enter the names of %d domestic animals:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", domestic[i]);
    }

    // Get the number of wild animals
    printf("Enter the number of wild animals: ");
    scanf("%d", &m);

    char wild[m][50]; // Array to store wild animals

    // Input wild animals
    printf("Enter the names of %d wild animals:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%s", wild[i]);
    }

    // Print all animals
    printf("\nList of all %d animals:\n", n + m);

    // Print domestic animals
    for (int i = 0; i < n; i++) {
        printf("%s\n", domestic[i]);
    }

    // Print wild animals
    for (int i = 0; i < m; i++) {
        printf("%s\n", wild[i]);
    }

    return 0;
}

