#include<stdio.h>
#define max 10

int stack[max];
int top=-1;
// push operation
void push (int item){
    if(top==max-1){
        printf("Stack is overflow\n");
        return ;
    }
    stack[++top]=item;
    printf("pushed %d\n",item);
}
// pop operation
void pop(){
    if(top==-1){
        printf("Stack is underflow\n");
        return ;
    }
    printf("popped element %d\n",stack[top--]);
}

// palindrome
void palindrome() {
    int n, temp, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (n == rev)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome\n");
}
// display stack
void display(){
    if(top==-1){
        printf("Stack is empty");
        return ;
    }
    printf("Stack elements:\n");
    for(int i=top ;i >= 0;i--){
        printf("%d\n",stack[i]);
    }
}

int main(){

    int choice , item;
    while(1){
        printf("==== Stack menu === \n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.check palindrome\n");
        printf("4.Display stack\n");
        printf("5.Exit\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter the element :");
            scanf("%d",&item);
            push(item);
            break;
        
        case 2:
        pop();
        break;

        case 3:
        palindrome();
        break;

        case 4:
        display();
        break;

        case 5:
        return 0;

        default:
            printf("Invalis choice\n");

       }
    }
}



