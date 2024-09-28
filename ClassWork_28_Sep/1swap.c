#include<stdio.h>

int main(){
    int a = 10;
    // printf("Enter the value of a :");
    // scanf("%d", &a);

    int b = 20;
    // printf("Enter the value of b :");
    // scanf("%d", &b);
    int c;

    c = a;
    a = b;
    b = c;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
}