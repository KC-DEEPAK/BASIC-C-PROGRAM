#include <stdio.h>
#define N 5

int stack[N];
int top = -1;

void push() {
    int x;
    printf("Enter the element: ");
    scanf("%d", &x);
    if (top == N - 1) {
        printf("Overflow: Stack is full!\n");
    } else {
        top++;
        stack[top] = x;
        printf("Pushed %d onto stack.\n", x);
    }
}


void pop() {
    if (top == -1) {
        printf("Underflow: Stack is empty!\n");
    } else {
        printf("Popped %d from stack.\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

