#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

void main(){ 

    int richtige=0, falsche=0, found, counter = 0, lenght;
    char solved = FALSE, temp=0;
    char wahr[20], eingabe[2], usedBuchstaben[60];
    lenght = strlen(wahr);


    printf("Eingabe Wahres wort:");
    scanf("%19s", wahr);
    wahr[lenght] = tolower(wahr[lenght]);

while(solved == FALSE){

    
    printf("Eingabe Buchstabe: ");
    scanf(" %c", &eingabe[1]);

    found = FALSE;


    eingabe[1] = tolower(eingabe[1]);

    for(int i=0; wahr[i] != '\0'; i++){



        if(eingabe[1] == wahr[i] && strchr(usedBuchstaben, eingabe[1]) == NULL){
            richtige++;
            usedBuchstaben[counter] = eingabe[1];
            counter++;
            found = TRUE;
        }

        else if(eingabe[1] == wahr[i] && strchr(usedBuchstaben, eingabe[1]) != NULL){
            printf("Du hast diesen Buchstaben schon benutzt!\n");
            found = TRUE;
        }
        

    }

    if(found == FALSE){
        falsche++;
        usedBuchstaben[counter] = eingabe[1];
        counter++;
    }

    if(richtige == strlen(wahr)){
        solved = TRUE;
        printf("Du hast das Wort erraten! es war %s", wahr);
     }
    else if(richtige <= 6 && falsche >= 6){
        solved = TRUE;
        printf("Du hast verloren! Das Wort war %s\n", wahr);
    }

    printf("Falsche: %d  Richtige: %d\n", falsche, richtige);


    }

}