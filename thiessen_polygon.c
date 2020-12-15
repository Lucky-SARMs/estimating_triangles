#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define WIDTH 5
#define HEIGHT 3
#define MAX_ARRAY 20

void set_array(char *char_ptr, int width_limit, int height_limit);
void print_array(char *char_ptr, int width_limit, int height_limit);

int main(void){
    char *character_array = malloc(15*sizeof(int));
    set_array(character_array, WIDTH, HEIGHT);
    print_array(character_array, WIDTH, HEIGHT);
    free(character_array);
    return(EXIT_SUCCESS);
}

void set_array(char *char_ptr, int width_limit, int height_limit){
    int max_index = (width_limit * height_limit);
    for(int counter = 0; counter < max_index; counter++){
        (*(char_ptr + (counter * sizeof(char)))) = 'x';
    }
}

void print_array(char *char_ptr, int width_limit, int height_limit){
    int max_index = (width_limit * height_limit);
    for(int counter = 0; counter < max_index; counter++){
        if(counter%WIDTH == 0){
            printf("\n");
        }
        printf("%c", *(char_ptr + counter*sizeof(char)));
    }
    printf("\n");
}