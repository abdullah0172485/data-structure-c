#include<stdio.h>

int main() {
    float radius, area, circumference;
    float pi = 3.14159;
    
    printf("Enter the Radius of Circle: ");
    scanf("%f", &radius);
    
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    
    printf("\nArea of Circle: %.2f\n", area);
    printf("Circumference of Circle: %.2f\n", circumference); 
    
    return 0;
}