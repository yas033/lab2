#include<stdio.h>
#include <stdlib.h>

int32_t is_ascii(char str[]){
    for(int i=0; str[i]!='\0';i+=1){
        if(str[i]>127||str[i]<0){ //see if it is not ascii
            return 0;
        }
    }
    return 1;
}

int main (){
    printf("Is 🔥 ASCII? %d\n", is_ascii("🔥"));   //%d here is used for chech the assci number
}