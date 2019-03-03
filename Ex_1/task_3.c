#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_Perfect_Square(int x){
    int s = (int)sqrt(x);
    return (s*s == x);
}

bool fib(int n){
    if(is_Perfect_Square(5 * n * n + 4) || is_Perfect_Square(5 * n * n - 4)){
        printf("%d is a fibonacci number\n", n);
        return true;
    } else {
        printf("%d is not a fibonacci number\n", n);

        return false;
    }
}

int main(){
    fib(56);
    fib(55);
}

