//Write a C Program to find the sum of digits in a given number (3marks)

#include <stdio.h>
#include <unistd.h>

int main () {
    int number, sum = 0, digit;

    printf("Enter any number more than one digit: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }

    printf("\nCalculating the sum of digits in the given number... \n");
    sleep(2);

    printf("The sum of digits in the given number is: %d \n", sum);


    return 0;
}