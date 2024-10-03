//program to determine people eligible for loan
/*
program to determine people eligible for loan
Author:vienna kimani
Reg no:CT102/G/246688/24
Date:01/10/2024
*/
//preprocessor directive printf() scanf()

#include <stdio.h>

int main() {
    int age ='a'//%d
    ;float income ='i'//%f

    ;printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your annual income (in sh): ");
    scanf("%f", &income);

    if (age >= 21 & income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
