#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "aeiceg";  // the password to compare against
    char input[3][3];            // the input matrix
    char diagonal[6];            // the concatenated diagonal characters
    int i, j, k;
    
    printf("Enter the input matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf(" %c", &input[i][j]);  // accept input characters as 3x3 matrix
        }
    }
    
    // concatenate the diagonal characters
    k = 0;
    for(i=0; i<3; i++) {
        diagonal[k++] = input[i][i];
    }
    for(i=0; i<3; i++) {
        diagonal[k++] = input[i][2-i];
    }
    diagonal[k] = '\0';   // add null character at the end of the string
    
    // compare the concatenated diagonal characters with the password
    if(strcmp(diagonal, password) == 0) {
        printf("Password verified! The locker is opened.\n");
    } else {
        printf("Incorrect password! The locker remains closed.\n");
    }
    
    return 0;
}