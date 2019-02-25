//
// Created by ramon on 2/21/2019.
//
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void swap(int *i, int *k){
    int temp = *i;
    *i = *k;
    *k = temp;
}

void selection_sort(int a[], int n){
    int i, j, k;
    for(i = 0; i < n; i++){
        k = i;
        for (j = i + 1; j < n; j++) {
            if(a[j] < a[k]){
                k = j;
            }
        }
        swap(&a[k],&a[i]);

    }
    for(int l = 0; l < n; l++){
        printf("%d ", a[l]);
    }
}

void non_sort(){
    int n = 0;
    int m = 0;
    int a[10], b[10];
    printf("First array:");

    char temp;
//    build first array
    while (scanf("%d", &a[n])) {
        n++;
    }
    scanf("%s", &temp);

//    build second array
    printf("Second array:");
    while (scanf("%d ", &b[m])) {
        m++;
    }
    scanf("%s", &temp);

//    array for both initial arrays
    int result[n+m];

//    copie both arrays into one
    for(int i = 0; i < n; i++){
        result[i] = a[i];
    }
    for(int j = n; j < n+m; j++){
        result[j] = b[j - 2];
    }

//    call selectionsort
    selection_sort(result, n+m);


}

int main(){
    non_sort();
}
