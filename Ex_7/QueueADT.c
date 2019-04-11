//
// Created by ramon on 4/4/2019.
//TODO: Implement dynamic allocation of space if queue is full or half empty
//
//
//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define QUEUE_SIZE 5

typedef struct queueADT{
    int elements[QUEUE_SIZE];
    int head;
    int tail;
    int count;

} queue;


bool isFull(queue *q){
    if(q->count == QUEUE_SIZE)
        return true;
    else
        return false;
}
void initialize(queue *q){
    q->count = 0;
    q->head = 0;
    q->tail = 0;
}

int enqueue(queue *q, int value){
    if(!isFull(q)){
        q->elements[q->tail] = value;
        printf("%d was enqued at position %d \n", value, q->tail);
        q->tail += 1;
        q->count += 1;
        return q->tail;
    } else
        return -1;

}

int dequeue(queue *q){
    int t = 0;
    if(q->count >= 0){
        q->count -= 1;
        t = q->elements[q->head];
        q->head += 1;
        printf("%d was dequeued\n", t);
        return t;
    } else
        return -1;
}

int compareQueue(queue *qA, queue *qB){
    int t = -1;
    if(qA->count == qB->count){
        for(int i = 0; i < qA->tail; i++){
            if(qA->elements[i] == qB->elements[i])
                t = 1;
            else
                t = 0;
        }
    }
    if(t == 1){
        printf("Are equal");
    } else
        printf("Not equal");
    return t;
}

int printQueue(queue *q){
    if(!isFull(q)){
        for(int i = q->head; i < q->tail; i++){
            printf("%d | ", q->elements[i]);
        }
        printf("\n");
    }
}


int main(){
    queue qA;
    initialize(&qA);
    enqueue(&qA, 4);
    enqueue(&qA, 1);
    enqueue(&qA, 3);
    enqueue(&qA, 6);
    printQueue(&qA);
    queue qB;
    initialize(&qB);
    enqueue(&qB, 4);
    enqueue(&qB, 1);
    enqueue(&qB, 3);
    enqueue(&qB, 6);
    printQueue(&qB);
    compareQueue(&qA, &qB);
}



