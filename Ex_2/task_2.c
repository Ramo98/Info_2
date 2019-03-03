//
// Created by ramon on 2/28/2019.
// Recursive C program that creates a pyramid of '*'
#include <stdio.h>

int triangle(int n, int d){
    if(n == 0){
        return 0;
    } else {
        for(int i = 0; i < d; i++){
            if(i == 0){
                printf("%*s",n,"*");

            } else {
                printf("%s","*");
            }
        }
        printf("\n");
        return triangle(n - 1, d + 2);
    }
}


int main(){
    triangle(6,1);  
}
