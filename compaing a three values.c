#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter the value of a and b and c:\n");
    scanf("%d %d %d",&a, &b, &c);

    if(a > b && a > c) {
       printf("a is grater then b and c:\n");
    }else if(b > a && b > c) {
       printf("b is grater then a and c:\n");
    }else if(c > a && c > b) {
       printf("c is grater then a and b:\n");
    }else {
       printf("invaid syntax");
    } 
    return 0;
}
