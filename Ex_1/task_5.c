//
// Created by ramon on 2/22/2019.
//
#include <stdio.h>
#include <memory.h>


void swap(char str[],int i, int k){
    char temp = str[i];
    str[i] = str[k];
    str[k] = temp;
}

int compare(char a, char b){
    if(a < b){
        return -1;
    } else if(a > b){
        return 1;
    } else{
        return 0;
    }
}

void insertionSort(char a[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i - 1; j >= 0; j--){
//            check for equal chars in lower and uppercase
            if(a[j] + 32 == a[j+1] || a[j] - 32 == a[j+1]){
                int c = compare(a[j],a[j+1]);
                if(c == - 1){
                    continue;
                } else if(c == 1){
                    swap(a,j, j+1);
                } else {
                    continue;
                }
//              normal lower char swapping
            } else if(a[j] > a[j + 1] && a[j+1] >= 97){
                swap(a,j, j+1);

//                uppercase + lowercase --> lowercase + uppercase ----> He => eH
            } else if(a[j] < a[j+1] && (a[j] <= 90) && a[j] + 32 > a[j+1]){
                swap(a, j, j+1);

//                lowercase + uppercase --> uppercase + lowercase ----> tS => St
            } else if(a[j] > a[j+1] && a[j+1] <= 90 && a[j] - 32 > a[j+1]){
                swap(a, j, j+1);
            }
        }
    }
    printf("%s", a);
}

int main(){

    char unsorted[100];
    printf("Enter string >>");
    scanf("%s", unsorted);
    insertionSort(unsorted, strlen(unsorted));
    return 0;
}