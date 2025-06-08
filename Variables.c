#include <stdio.h>

int main() {

    int x; 
    x = 1337;

    int y = 7331;

    int age = 21;
    float gpa = 2.05;
    char grade = 'C';
    char name[] = "Bro";

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your GPA is %0.2f\n", gpa);

    return 0; 
}