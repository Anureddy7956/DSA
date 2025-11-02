#include <stdio.h>

int top = -1;
int max = 10;
int s[10];

void push(int x) {
    if (top >= max - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        s[top] = x;
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d is deleted from the stack\n", s[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d\t", s[i]);
        }
        printf("\n");
    }
}

int main() {
    int x, n;

    printf("Enter number of elements to push into the stack: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        push(x);
    }

    display(); 
    
    printf("\nHow many elements do you want to pop? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        pop();
    }

    display();  

    return 0;
}
