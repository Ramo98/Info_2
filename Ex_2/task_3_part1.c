//
// Created by ramon on 3/2/2019.
//
#include <stdio.h>


int drawBoxFractual(int x, int y, int l, int iter){
    if(iter != 0){
//  bottom left
        drawBoxFractual(x, y, l/3, iter - 1);


//  top left
        drawBoxFractual(x + 2 * l/3, y, l/3, iter - 1);

//  center
        drawBoxFractual(x + l/3, y + l/3, l/3, iter - 1);

//  bottom right
        drawBoxFractual(x, y + 2 * l/3, l/3, iter - 1);

//  top right
        drawBoxFractual(x + 2 * l/3, y + 2 * l/3, l/3, iter - 1);


    } else{
        printf("(%d, %d), %d\n", x, y, l);
        return 0;
    }

}

int main(){
    drawBoxFractual(0, 0, 300, 1);
}
