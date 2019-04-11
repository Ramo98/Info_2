//
// Created by Ramon on 4/4/2019.
// Stack with Array implementation -- LIFO
//
//TODO: Implement dynamic allocation of space if stack shrinks
//

#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>

#define INITIAL_STACK_SIZE 5

typedef struct stackADT{
    int *elements;
    int size;
    int count;
} stack;

void initialize(stack *s){
    s->elements = (int*)malloc(sizeof(int)*INITIAL_STACK_SIZE);
    s->size = INITIAL_STACK_SIZE; //size of array
    s->count = 0; //elements in array

}
//check if there are no elements
int isEmpty(stack *s){
    if(s->count == 0){
        return true;
    } else
        return false;
}

//add elements to stack
int push(stack *s, int value){
    //if array not full, add value
    if(s->count < s->size){
        s->elements[s->count] = value;
    } else { //stack is full => more space
        s->size += INITIAL_STACK_SIZE;
        s->elements[s->count] = value;
    }
    //count always point to the next free empty space
    s->count++;
    return s->count;
}

int pop(stack *s){
    if(!isEmpty(s)){
        s->count -= 1;
        printf("Poped: %d\n", s->elements[s->count]);
        return s->elements[s->count];
    } else {
        return -1;
    }
}
int deleteStack(stack *s){
    int c = s->count;
    for(int i = 0; i <= c; i++){
        pop(s);
    }
    if(isEmpty(s)){
        printf("Stack is empty\n");
    }
}

int compareStack(stack *sA, stack *sB){
    int t = -1;
    //same size?
    if(sA->size == sB->size){
        for(int i = 0; i < sA->size; i++){
            if(sA->elements[i] == sB->elements[i]){
                t = 1;
            } else {
                t = 0;
            }
        }
        if(t == 1){
            printf("Equal\n");
        } else
            printf("Not equal\n");
    }
    return t;
}


int printStack(stack *s){
    for (int i = 0; i < s->count ; i++) {
        printf("%d | ", s->elements[i]);
    }
    return 0;
}




int main(){
    stack sA;
    stack sB;

    initialize(&sA);
    initialize(&sB);
    push(&sA,1);
    push(&sA,2);
    push(&sA,3);
    push(&sA,4);
    push(&sA,5);
    push(&sA,6);
    push(&sA,7);
    push(&sA,8);


    printf("Stack A:\n");
    printStack(&sA);
    printf("\n");

    printf("Stack B:\n");

    push(&sB,10);
    push(&sB,11);
    push(&sB,12);
    push(&sB,13);
    printStack(&sB);
    printf("\n");
    push(&sB,8);
    push(&sB,9);
    compareStack(&sA,&sB);
    printf("\n");

    pop(&sA);
    pop(&sA);
    pop(&sA);
    pop(&sA);
    deleteStack(&sA);
    deleteStack(&sB);



}
