#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


#define TRUE 1
#define FALSE 0

void printer(char wahr[], char eingabe[], char abgleich[]);
void printfull();
void print7();
void print6();
void print5();
void print4();
void print3();
void print2();
void print1();
void print0();

void main(){ 

    int richtige=0, falsche=0, found, counter = 0, lenght;
    char solved = FALSE, temp=0;
    char wahr[20], eingabe[2], usedBuchstaben[60];
    lenght = strlen(wahr);


    printf("Eingabe Wahres wort:");
    scanf("%19s", wahr);
    system("clear");
    wahr[lenght] = tolower(wahr[lenght]);

while(solved == FALSE){


    printf("Falsche: %d  Richtige: %d\n", falsche, richtige);
    printf("Eingabe Buchstabe: ");
    fflush(stdout);
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


    if(falsche == 0) print0();
    else if(falsche == 1) print1();
    else if(falsche == 2) print2();
    else if(falsche == 3) print3();
    else if(falsche == 4) print4();
    else if(falsche == 5) print5();
    else if(falsche >= 6) print6();
    

    char abgleich[20];
    printer(wahr, usedBuchstaben, abgleich);
    abgleich[strlen(wahr)] = '\0';

    if(richtige == strlen(wahr) || strchr(abgleich, '_') == NULL){
        solved = TRUE;
        printf("Du hast das Wort erraten! es war ’%s’\n", wahr);
     }
    else if(richtige <= 6 && falsche >= 6){
        solved = TRUE;
        printf("\nDu hast verloren! Das Wort war ’%s’\n", wahr);
    }



    }

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

void printfull(){

printf("                               ******************************************************               \n");                                             
printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@               \n");   
printf("                               @@@@@-          +@@@@.                          @@@@                 \n");              
printf("                               @@@@@-        .@@@@*                            @@@@                 \n");             
printf("                               @@@@@-       @@@@@.                             @@@@                 \n");             
printf("                               @@@@@-     =@@@@.                               #@@@                 \n");            
printf("                               @@@@@-   .@@@@#                                 #@@@                 \n");            
printf("                               @@@@@-  @@@@@.                                  *@@@                 \n");            
printf("                               @@@@@--@@@@-                                    *@@@                 \n");            
printf("                               @@@@@@@@@@                                      +@@@                 \n");            
printf("                               @@@@@@@@                                        +@@@                 \n");            
printf("                               @@@@@@=                                         =@@@                 \n");            
printf("                               @@@@@-                                        .@@@@@@.               \n");    
printf("                               @@@@@-                                      -@@@*..*@@@:             \n");   
printf("                               @@@@@-                                     =@@:      -@@:            \n");   
printf("                               @@@@@-                                     @@#        #@@            \n");   
printf("                               @@@@@-                                     @@@        @@@            \n");   
printf("                               @@@@@-                                     .@@@.    .@@@             \n");  
printf("                               @@@@@-                                       +@@@@@@@@=              \n");
printf("                               @@@@@-                                          :@@.                 \n");
printf("                               @@@@@-                                          :@@+                 \n");
printf("                               @@@@@-                                      .#@@@@@@@@@@:.           \n");
printf("                               @@@@@-                                  .#@@@@*..@@: .=@@@@@+.       \n");
printf("                               @@@@@-                                @@@@+.    .@@:      .#@@       \n");
printf("                               @@@@@-                                           @@-                 \n");
printf("                               @@@@@-                                           @@+                 \n");
printf("                               @@@@@-                                           @@#                 \n");
printf("                               @@@@@-                                           @@@                 \n");
printf("                               @@@@@-                                           @@@                 \n");
printf("                               @@@@@-                                          =@@@:                \n");
printf("                               @@@@@-                                         #@@*@@.               \n");
printf("                               @@@@@-                                        @@@  @@@               \n");
printf("                               @@@@@-                                      .@@@    @@               \n");
printf("                               @@@@@-                                     :@@*     .@@*             \n");
printf("                               @@@@@-                                    =@@=       -@@:            \n");
printf("                               @@@@@-                                   *@@.         +@@.           \n");
printf("                               @@@@@-                                  .@@.            @@           \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}

void print7(){
printf("                               ******************************************************               \n");                                             
printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@               \n");   
printf("                               @@@@@-          +@@@@.                          @@@@                 \n");              
printf("                               @@@@@-        .@@@@*                            @@@@                 \n");             
printf("                               @@@@@-       @@@@@.                             @@@@                 \n");             
printf("                               @@@@@-     =@@@@.                               #@@@                 \n");            
printf("                               @@@@@-   .@@@@#                                 #@@@                 \n");            
printf("                               @@@@@-  @@@@@.                                  *@@@                 \n");            
printf("                               @@@@@--@@@@-                                    *@@@                 \n");            
printf("                               @@@@@@@@@@                                      +@@@                 \n");            
printf("                               @@@@@@@@                                        +@@@                 \n");            
printf("                               @@@@@@=                                         =@@@                 \n");            
printf("                               @@@@@-                                        .@@@@@@.               \n");    
printf("                               @@@@@-                                      -@@@*..*@@@:             \n");   
printf("                               @@@@@-                                     =@@:      -@@:            \n");   
printf("                               @@@@@-                                     @@#        #@@            \n");   
printf("                               @@@@@-                                     @@@        @@@            \n");   
printf("                               @@@@@-                                     .@@@.    .@@@             \n");  
printf("                               @@@@@-                                       +@@@@@@@@=              \n");
printf("                               @@@@@-                                          :@@.                 \n");
printf("                               @@@@@-                                          :@@+                 \n");
printf("                               @@@@@-                                      .#@@@@@@@@@@:.           \n");
printf("                               @@@@@-                                  .#@@@@*..@@: .=@@@@@+.       \n");
printf("                               @@@@@-                                @@@@+.    .@@:      .#@@       \n");
printf("                               @@@@@-                                           @@-                 \n");
printf("                               @@@@@-                                           @@+                 \n");
printf("                               @@@@@-                                           @@#                 \n");
printf("                               @@@@@-                                           @@@                 \n");
printf("                               @@@@@-                                           @@@                 \n");
printf("                               @@@@@-                                          =@@@:                \n");
printf("                               @@@@@-                                         #@@                   \n");
printf("                               @@@@@-                                        @@@                    \n");
printf("                               @@@@@-                                      .@@@                     \n");
printf("                               @@@@@-                                     :@@*                      \n");
printf("                               @@@@@-                                    =@@=                       \n");
printf("                               @@@@@-                                   *@@.                        \n");
printf("                               @@@@@-                                  .@@.                         \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}
void print6(){

printf("                               ******************************************************               \n");                                             
printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@               \n");   
printf("                               @@@@@-          +@@@@.                          @@@@                 \n");              
printf("                               @@@@@-        .@@@@*                            @@@@                 \n");             
printf("                               @@@@@-       @@@@@.                             @@@@                 \n");             
printf("                               @@@@@-     =@@@@.                               #@@@                 \n");            
printf("                               @@@@@-   .@@@@#                                 #@@@                 \n");            
printf("                               @@@@@-  @@@@@.                                  *@@@                 \n");            
printf("                               @@@@@--@@@@-                                    *@@@                 \n");            
printf("                               @@@@@@@@@@                                      +@@@                 \n");            
printf("                               @@@@@@@@                                        +@@@                 \n");            
printf("                               @@@@@@=                                         =@@@                 \n");            
printf("                               @@@@@-                                        .@@@@@@.               \n");    
printf("                               @@@@@-                                      -@@@*..*@@@:             \n");   
printf("                               @@@@@-                                     =@@:      -@@:            \n");   
printf("                               @@@@@-                                     @@#        #@@            \n");   
printf("                               @@@@@-                                     @@@        @@@            \n");   
printf("                               @@@@@-                                     .@@@.    .@@@             \n");  
printf("                               @@@@@-                                       +@@@@@@@@=              \n");
printf("                               @@@@@-                                          :@@.                 \n");
printf("                               @@@@@-                                          :@@+                 \n");
printf("                               @@@@@-                                      .#@@@@@@@@@@:.           \n");
printf("                               @@@@@-                                  .#@@@@*..@@: .=@@@@@+.       \n");
printf("                               @@@@@-                                @@@@+.    .@@:      .#@@       \n");
printf("                               @@@@@-                                           @@-                 \n");
printf("                               @@@@@-                                           @@+                 \n");
printf("                               @@@@@-                                           @@#                 \n");
printf("                               @@@@@-                                           @@@                 \n");
printf("                               @@@@@-                                           @@@                 \n");
printf("                               @@@@@-                                          =@@@:                \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}

void print5(){

printf("                               ******************************************************               \n");                                             
printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@               \n");   
printf("                               @@@@@-          +@@@@.                          @@@@                 \n");              
printf("                               @@@@@-        .@@@@*                            @@@@                 \n");             
printf("                               @@@@@-       @@@@@.                             @@@@                 \n");             
printf("                               @@@@@-     =@@@@.                               #@@@                 \n");            
printf("                               @@@@@-   .@@@@#                                 #@@@                 \n");            
printf("                               @@@@@-  @@@@@.                                  *@@@                 \n");            
printf("                               @@@@@--@@@@-                                    *@@@                 \n");            
printf("                               @@@@@@@@@@                                      +@@@                 \n");            
printf("                               @@@@@@@@                                        +@@@                 \n");            
printf("                               @@@@@@=                                         =@@@                 \n");            
printf("                               @@@@@-                                        .@@@@@@.               \n");    
printf("                               @@@@@-                                      -@@@*..*@@@:             \n");   
printf("                               @@@@@-                                     =@@:      -@@:            \n");   
printf("                               @@@@@-                                     @@#        #@@            \n");   
printf("                               @@@@@-                                     @@@        @@@            \n");   
printf("                               @@@@@-                                     .@@@.    .@@@             \n");  
printf("                               @@@@@-                                       +@@@@@@@@=              \n");
printf("                               @@@@@-                                          :@@.                 \n");
printf("                               @@@@@-                                          :@@+                 \n");
printf("                               @@@@@-                                      .#@@@@@@@@@@:.           \n");
printf("                               @@@@@-                                  .#@@@@*.     .=@@@@@+.       \n");
printf("                               @@@@@-                                @@@@+.              .#@@       \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}


void print4(){

printf("                               ******************************************************               \n");                                             
printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@               \n");   
printf("                               @@@@@-          +@@@@.                          @@@@                 \n");              
printf("                               @@@@@-        .@@@@*                            @@@@                 \n");             
printf("                               @@@@@-       @@@@@.                             @@@@                 \n");             
printf("                               @@@@@-     =@@@@.                               #@@@                 \n");            
printf("                               @@@@@-   .@@@@#                                 #@@@                 \n");            
printf("                               @@@@@-  @@@@@.                                  *@@@                 \n");            
printf("                               @@@@@--@@@@-                                    *@@@                 \n");            
printf("                               @@@@@@@@@@                                      +@@@                 \n");            
printf("                               @@@@@@@@                                        +@@@                 \n");            
printf("                               @@@@@@=                                         =@@@                 \n");            
printf("                               @@@@@-                                                               \n");    
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");  
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}

void print3(){

printf("                               ******************************************************               \n");                                             
printf("                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@               \n");   
printf("                               @@@@@-          +@@@@.                                               \n");              
printf("                               @@@@@-        .@@@@*                                                 \n");             
printf("                               @@@@@-       @@@@@.                                                  \n");             
printf("                               @@@@@-     =@@@@.                                                    \n");            
printf("                               @@@@@-   .@@@@#                                                      \n");            
printf("                               @@@@@-  @@@@@.                                                       \n");            
printf("                               @@@@@--@@@@-                                                         \n");            
printf("                               @@@@@@@@@@                                                           \n");            
printf("                               @@@@@@@@                                                             \n");            
printf("                               @@@@@@=                                                              \n");            
printf("                               @@@@@-                                                               \n");    
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");  
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}

void print2(){

printf("                                                                                                    \n");                                             
printf("                                                                                                    \n");   
printf("                               @@@@@-          +@@@@.                                               \n");              
printf("                               @@@@@-        .@@@@*                                                 \n");             
printf("                               @@@@@-       @@@@@.                                                  \n");             
printf("                               @@@@@-     =@@@@.                                                    \n");            
printf("                               @@@@@-   .@@@@#                                                      \n");            
printf("                               @@@@@-  @@@@@.                                                       \n");            
printf("                               @@@@@--@@@@-                                                         \n");            
printf("                               @@@@@@@@@@                                                           \n");            
printf("                               @@@@@@@@                                                             \n");            
printf("                               @@@@@@=                                                              \n");            
printf("                               @@@@@-                                                               \n");    
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");  
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}

void print1(){

printf("                                                                                                    \n");                                             
printf("                                                                                                    \n");   
printf("                               @@@@@-                                                               \n");              
printf("                               @@@@@-                                                               \n");             
printf("                               @@@@@-                                                               \n");             
printf("                               @@@@@-                                                               \n");            
printf("                               @@@@@-                                                               \n");            
printf("                               @@@@@-                                                               \n");            
printf("                               @@@@@-                                                               \n");            
printf("                               @@@@@-                                                               \n");            
printf("                               @@@@@-                                                               \n");            
printf("                               @@@@@-                                                               \n");            
printf("                               @@@@@-                                                               \n");    
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");   
printf("                               @@@@@-                                                               \n");  
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                               @@@@@-                                                               \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}

void print0(){

printf("                                                                                                    \n");                                             
printf("                                                                                                    \n");   
printf("                                                                                                    \n");              
printf("                                                                                               \n");             
printf("                                                                                              \n");             
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                                    \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");            
printf("                                                                                              \n");    
printf("                                                                                              \n");   
printf("                                                                                              \n");   
printf("                                                                                              \n");   
printf("                                                                                              \n");  
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                              \n");
printf("                                                                                                    \n");
printf("                                                                                                    \n");
printf("                       .=@@@@@@@@@@@@@#-:                                                           \n");
printf("                   *@@@@@@@@@@@@@@@@@@@@@@@@@*                                                      \n");
printf("               :@@@@@@@@=.             .+@@@@@@@@:                                                  \n");
printf("            .@@@@@@                         @@@@@@.                                                 \n");
printf("          .@@@@@+                               *@@@@@:                                             \n");
printf("        .@@@@@:                                   .@@@@@.                                           \n");
printf("       #@@@@.                                       .@@@@#                                          \n");
printf("     .@@@@=                                           =@@@@.                                        \n");
printf("    .@@@@                                               @@@@:                                       \n");
printf("   .@@@@                                                 @@@@.                                      \n");
printf("   @@@@                                                   @@@@                                      \n");
printf("  @@@@                                                     @@@@                                     \n");
printf(" -@@@:                                                     .@@@-                                    \n");
printf(" @@@@                                                       @@@@                                    \n");
printf(" @@@-                                                       -@@@                                    \n");

}
