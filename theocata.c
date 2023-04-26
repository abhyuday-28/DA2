#include <stdio.h>

int main() {
    // initialize arrays to store temperatures
    int chennai[7];
    int delhi[7];
    int haveri[7];
    int gangtok[7];

    // get input temperatures for Chennai
    printf("Enter temperatures for Chennai (in degrees Celsius) for the week:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &chennai[i]);

        // check if input is within valid range
        while (chennai[i] < 28 || chennai[i] > 33) {
            printf("Invalid input! Temperature should be between 28C and 33C.\n");
            scanf("%d", &chennai[i]);
        }

        // calculate temperatures for Delhi and Haveri based on Chennai temperature
        delhi[i] = chennai[i] - 8;
        haveri[i] = chennai[i] + 5;
    }

    // calculate temperatures for Gangtok based on Delhi and Haveri temperatures
    for (int i = 0; i < 7; i++) {
        gangtok[i] = haveri[i] - delhi[i];
    }

    // print output temperatures for Gangtok
    printf("Temperatures for Gangtok (in degrees Celsius) for the week:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", gangtok[i]);
    }

    return 0;
}