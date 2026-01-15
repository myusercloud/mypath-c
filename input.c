#include <stdio.h>
#include <unistd.h>

int main () {

    int age;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nProcessing your information...\n");
    sleep(2);

    printf("%s is turning %d years old this year. \n", name, age);

    return 0;
}