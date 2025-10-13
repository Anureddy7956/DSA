// Stack push operation 
#include<stdio.h>
int top=-1;
int max=10;
int s[10];

void push(int x){
    if(top>=max-1){
        printf("stack is overflowing");
    }
    else{
        top=top+1;
        s[top]=x;
    }
}   
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("The stack elements are : ");
        for(int i=top; i>=0 ;i--){
        printf("%d\t",s[i]);
        }
    }
}

int main(){
    int x , n;
    printf("Enter no.of value into the stack array : ");
    scanf("%d",&n);
        for(int i=0; i<n ;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&x);
        push(x);
        }
    display();
    return 0;
}
