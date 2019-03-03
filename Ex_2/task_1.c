//
// Created by ramon on 2/26/2019.
//
// C program that calculates gcd and lcm

#include <stdio.h>


//GCD program
int gcd(int x, int y){
    if(y != 0){
        return gcd(y, x % y);
    } else {
        printf("GCD is %d\n", x);
        return x;
    }

}

//C program that calculates the LCM based on the GCD
int lcm(int x, int y, int result) {
    result = (x*y)/gcd(x,y);
    printf("LCM is %d\n", result);
    return result;

}



int main(){
    lcm(12,8, 1);
}