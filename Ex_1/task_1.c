#include <memory.h>
#include <stdio.h>


void convertCharacters(char input[]){
    for(int i = 0; i < strlen(input); i++){
        //    check that input is valid
        if(input[i] >= 'A' && input[i] <= 'z'){
            if(input[i] >= 'A' && input[i] <= 'Z'){
                input[i] += 32;
            } else if(input[i] >= 'a' && input[i] <= 'z'){
                input[i] -= 32;
            }
        }

    }
    printf("%s", input);
}

int main(){
    char user_in[1000];
    printf("Enter a string >>");
    scanf("%[^\n]s ", user_in);
    convertCharacters(user_in);
    return 0;
}