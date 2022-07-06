#include "main.h"

/**
 * print_alphabet_x10
 * 
 */

void print_alphabet_x10(void){
    int x = 0;
    char y;
    while (x < 10){
        for (y = 'a'; y <= 'z'; y ++){
            printf(y);
            x++;
        }
    }
}