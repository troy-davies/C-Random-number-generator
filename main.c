// Simple random number generator made by Troy Davies.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    //Seed the gen
    int min, max;
    printf("Input minimum value.\nValue: ");
    scanf("%d", &min);
    printf("Input maximum value.\nValue: ");
    scanf("%d", &max);
    if(max < min) {
    printf("ERROR: Maximum value must be larger than minimum value.\n");
    return 1; // Make sure that there is a proper range of numbers.
    }
    int randnum = (rand() % (max - min + 1)) + min;
    printf("Random number is %d.\n", randnum);
    return 0;
}