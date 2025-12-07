// Simple random number generator made by Troy Davies.
#include <sodium.h>
#include <stdio.h>
int main() {
    if (sodium_init() < 1) { // Initiallise sodium
        return 1;
    }
    int min, max, random;
    randombytes(&random, sizeof(int));
    printf("Input minimum value.\nValue: ");
    scanf("%d", &min);
    printf("Input maximum value.\nValue: ");
    scanf("%d", &max);
    if(max < min) {
    printf("ERROR: Maximum value must be larger than minimum value.\n");
    return 1; // Make sure that there is a proper range of numbers
    }
    int randnum = min + randombytes_uniform(max - min + 1) // Generate random number
    printf("Random number is %d.\n", randnum);
    return 0;

}
