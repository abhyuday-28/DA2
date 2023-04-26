#include <stdio.h>

int main() {
    int sum = 0, num, digit;
    printf("Finding the mysterious number...\n");
    for(num=1000; num<=9998; num+=2) {  // iterate over even four-digit numbers
        sum = 0;
        int temp = num;
        while(temp > 0) 
        {   // add up the digits
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        while(sum > 9) 
        {   // keep adding digits until a single digit is found
            temp = sum;
            sum = 0;
            while(temp > 0) {
                digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
        }
    }
    if(sum % 2 == 0) 
    {
        printf("Even found: %d\n", num);
    } else 
    {
        printf("Odd found: %d\n", num);
    }
    
    return 0;
}