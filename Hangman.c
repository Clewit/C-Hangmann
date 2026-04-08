#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "files.h"


#define TRUE 1
#define FALSE 0

void printer(char wahr[], char eingabe[], char abgleich[]);


int main(){ 

    int richtige = 0, falsche = 0, found, counter = 0, lenght;
    char solved = FALSE;
    char wahr[20], eingabe, usedBuchstaben[60];

    printf("Eingabe Wahres wort:");
    scanf("%19s", wahr);
    system("clear");
    lenght = strlen(wahr);
    wahr[lenght] = tolower(wahr[lenght]);
    
    int temp = 0;

    while(solved == FALSE){

        printf("Falsche: %d  Richtige: %d\n", falsche, richtige);
        printf("Eingabe Buchstabe: ");
        fflush(stdout);
        scanf(" %c", &eingabe);

        found = FALSE;
        eingabe = tolower((unsigned char)eingabe);
        int alreadyUsed = (strchr(usedBuchstaben, eingabe) != NULL);

        for(int i = 0; wahr[i] != '\0'; i++){
            if(eingabe == wahr[i]){
                if(!alreadyUsed){
                    richtige++;
                    usedBuchstaben[i] = eingabe;

                }
                found = TRUE;
            }

            else{
                if(!alreadyUsed){
                    falsche++;
                }
            }
        }

        if(found){
            if(alreadyUsed){
                temp = 1;    
            }
        }    

        if(falsche == 0) print0();
    else if(falsche == 1) print1();
    else if(falsche == 2) print2();
    else if(falsche == 3) print3();
    else if(falsche == 4) print4();
    else if(falsche == 5) print5();
    else if(falsche >= 6) print6();
    
    printf("\n");

    if(temp == 1){
        printf("Du hast diesen Buchstaben bereits eingegeben!\n");
        temp = 0;
    }

    char abgleich[20];
    printer(wahr, usedBuchstaben, abgleich);
    abgleich[strlen(wahr)] = '\0';

    if(richtige == lenght || strchr(abgleich, '_') == NULL){
        solved = TRUE;
        printf("\nDu hast das Wort erraten! es war ’%s’\n", wahr);
     }
    else if(richtige <= 6 && falsche >= 6){
        solved = TRUE;
        printf("\nDu hast verloren! Das Wort war ’%s’\n", wahr);
    }

    }

    return 0;
}


void printer(char wahr[], char eingabe[], char abgleich[]) {

    int laenge = strlen(wahr);

    for(int i = 0; i < laenge; i++){
        int gefunden = 0;
        for(int j = 0; eingabe[j] != '\0'; j++){
            if(tolower(wahr[i]) == tolower(eingabe[j])){  
                gefunden = 1;
                break;
            }
        }

        if(gefunden){
            abgleich[i] = wahr[i];
            printf("%c", wahr[i]);
        } else {
            abgleich[i] = '_';
            printf("_");
        }
    }

    abgleich[laenge] = '\0';
};

