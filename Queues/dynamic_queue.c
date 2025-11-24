#include<stdio.h>
#include<stdlib.h>

int *queue; // dynamic array
int front = 0; // front index  
int rear = -1 ; // rear index
int size = 0; // current number of elements
int capacity = 5; // initial size of queue

// function to double the queue size
void double_queue_size(){
    capacity = capacity * 2;
    queue = (int*) realloc( queue, capacity * sizeof(int));
    printf("The size of doubled queue- New capacity= %d\n",capacity);

}

//Enqueue operation (insertion)
void enqueue(int value){
    if(size==capacity){
        double_queue_size();
    }
    rear++;
    queue[rear]=value;
    size++;
    printf("Enqueued: %d\n",value);
}

// Dequeue operation (deletion) 
void dequeue(){
    if(size==0){
        printf("Queue is empty!\n");
    }
    int value = queue[front];
    front ++;
    size --;
    printf("Dequeued : %d\n",value);  
}
 
// display fuction 
void display(){
     if(size==0){
        printf("Queue is empty!\n");
    }
    printf("The queue elements are : ");
    for(int i=front ; i<= rear ;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main(){
    queue = malloc(capacity * sizeof(int)) ; // iniitial dynamic memory allocation

    enqueue(50);
    enqueue(20);
    enqueue(10);
    enqueue(30);
    enqueue(70);

    display();

    enqueue(90);

    display();
    
    dequeue();

    display();

    return 0;
}



