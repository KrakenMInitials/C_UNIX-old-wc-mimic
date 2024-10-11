#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    FILE *srcfile = fopen(argv[1], "r");
    if (srcfile == NULL){  
        printf("File Access null");
    } else {
        char temp;
        char test[99];

        fgets(test, 99, srcfile);
        printf("%s", test);
        int i = 0;

        int control = 0;
        int j = 0;

        while ((test[j]) != '\n'){
            while (!(isspace(test[j]) || test[j]=='\n')){
                if (!control){
                    control = 1;
                    i++;
                }   
                j++;
            } //test
            control = 0;    
            j++;            
        }
    
        printf("%i", i);
    }


}