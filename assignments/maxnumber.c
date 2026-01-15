//Write a C program to find the maximum of three numbers using conditional operators (4marks)

#include <stdio.h>
#include <unistd.h>

int main () {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        max = num2;
    }
    else  {
        max = num3;
    }

    printf("\nCalculating the maximum number between the three... \n");
    sleep(2);

    printf("The maximum number between the three is: %d \n", max);




    return 0;
}