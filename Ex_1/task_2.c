#include <memory.h>
#include <stdio.h>
#include <stdbool.h>


void xy() {
    int digit, x, y, len;

    printf("How many numbers do you want to input?");
    scanf("%d", &len);
    int input[len];
    for (int i = 0; i < len; i++) {
        printf("Input next digit:");
        scanf("%d", &digit);
        input[i] = digit;
    }

    printf("Choose x:");
    scanf("%d", &x);
    printf("Choose y:");
    scanf("%d", &y);




    printf("Pairs:");
    for(int j = 0; j < len; j++){
        //    numbers that are greater than x and less than y
        if(input[j] > x && input[j] < y){
            printf("(%d,%d) ", input[j], j);
        }
    }

}

int main(){
    xy();
}

