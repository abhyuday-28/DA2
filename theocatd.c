#include <stdio.h>

int main() {
    int marks[25], birthmonth[25];
    int i, orig_total = 0, revised_total = 0, orig_avg, revised_avg;
    
    // accept original marks and birth months as input
    printf("Enter the original marks and birth months for the students:\n");
    for(i=0; i<25; i++) {
        scanf("%d %d", &marks[i], &birthmonth[i]);
    }
    
    // calculate revised marks and totals
    for(i=0; i<25; i++) {
        marks[i] += birthmonth[i];  // add the booster marks
        revised_total += marks[i];
        orig_total += marks[i] - birthmonth[i];  // subtract the booster marks to get the original marks
    }
    
    // calculate averages
    orig_avg = orig_total / 25;
    revised_avg = revised_total / 25;
    
    // decide whether to implement the revision or not
    if(revised_avg - orig_avg >= 5) {
        printf("Can implement - Significant increase in class average.\n");
    } else {
        printf("Need not implement - No significant increase in class average.\n");
    }
    
    // display the original and revised class averages
    printf("Original class average: %d\n", orig_avg);
    printf("Revised class average: %d\n", revised_avg);
    
    return 0;
}