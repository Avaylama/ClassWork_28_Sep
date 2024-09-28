#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    
    printf("Original values: a = %d, b = %d, c = %d\n", a, b, c);

   
    a = a + b + c; 
    b = a - (b + c); 
    c = a - (b + c); 
    a = a - (b + c); 

   
    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
