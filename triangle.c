#include <stdio.h>

int main() {
    int acute_count = 0, right_count = 0, obtuse_count = 0, wrong_count = 0;
    int i, a, b, c, sum;
    for (i = 1; i <= 5; i++) {
        printf("Enter the three angles of triangle %d: ", i);
        scanf("%d%d%d", &a, &b, &c);
        sum = a + b + c;
        if (sum > 180) {
            printf("Wrong Entry try again\n");
            wrong_count++;
            i--;
            continue;
        }
        if (a < 0 || b < 0 || c < 0) {
            printf("Angles cannot be negative, try again.\n");
            wrong_count++;
            i--;
            continue;
        }
        if (a + b + c == 180) {
            if (a < 90 && b < 90 && c < 90) {
                acute_count++;
            } else if (a == 90 || b == 90 || c == 90) {
                right_count++;
            } else {
                obtuse_count++;
            }
        } else {
            printf("Sum of angles should be equal to 180, try again.\n");
            wrong_count++;
            i--;
            continue;
        }
    }
    printf("Acute Angled Triangle: %d\n", acute_count);
    printf("Right Angled Triangle: %d\n", right_count);
    printf("Obtuse Angled Triangle: %d\n", obtuse_count);
    printf("Wrong Entries: %d\n", wrong_count);
    return 0;
}