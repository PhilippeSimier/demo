/* 
 * File:   main.c
 * Author: psimier
 *
 * Created on 2 décembre 2024, 14:39
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {


    int spaces;
    int current_number = 1;
    int nbLigne;

    printf("Combien de lignes ? ");
    scanf(" %d", &nbLigne);
    printf("\n");

    for (int i = 0; i < nbLigne; i++) {
        
        // Impression des espaces
        spaces = (nbLigne / 2) - abs((nbLigne / 2) - i);
        for (int s = 0; s < spaces; s++)
            printf("   ");

        // Impression des nombres pour cette ligne
        for (int j = 0; j < (nbLigne - 2 * spaces); j++) {
            printf("%02d ", current_number++);
            current_number %= 100;
        }
        
        // Nouvelle ligne après chaque ligne
        printf("\n");
    }
    printf("\n");

    return (EXIT_SUCCESS);
}

