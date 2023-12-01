#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main() {
    char plc[10];
    char DayDaSemana[30];

    scanf("%s", plc);
    scanf("%s", DayDaSemana);

  
    if ((strlen(plc) == 8 && plc[3] == '-' && isalpha(plc[0]) && isalpha(plc[1]) && isalpha(plc[2]) && isdigit(plc[4]) && isdigit(plc[5]) && isdigit(plc[6]) && isdigit(plc[7])) ||
        (strlen(plc) == 7 && isalpha(plc[0]) && isalpha(plc[1]) && isalpha(plc[2]) && isdigit(plc[3]) && isalpha(plc[4]) && isdigit(plc[5]) && isdigit(plc[6]))) {

            char ult = plc[strlen (plc)-1];
            
        if (strcmp(DayDaSemana, "SEGUNDA-FEIRA") == 0) {
            if (ult == '0' || ult == '1') {
                printf("%s nao pode circular segunda-feira\n", plc);
            } else {
                printf("%s pode circular segunda-feira\n", plc);
            }

        } else if (strcmp(DayDaSemana, "TERCA-FEIRA") == 0) {
            if (ult == '2' || ult == '3') {
                printf("%s nao pode circular terca-feira\n", plc);
            } else {
                printf("%s pode circular terca-feira\n", plc);
            }

        } else if (strcmp(DayDaSemana, "QUARTA-FEIRA") == 0) {
            if (ult == '4' || ult == '5') {
                printf("%s nao pode circular quarta-feira\n", plc);
            } else {
                printf("%s pode circular quarta-feira\n", plc);
            }

        } else if (strcmp(DayDaSemana, "QUINTA-FEIRA") == 0) {
            if (ult == '6' || ult == '7') {
                printf("%s nao pode circular quinta-feira\n", plc);
            } else {
                printf("%s pode circular quinta-feira\n", plc);
            }
        } else if (strcmp(DayDaSemana, "SEXTA-FEIRA") == 0) {
            if (ult == '8' || ult == '9') {
                printf("%s nao pode circular sexta-feira\n", plc);
            } else {
                printf("%s pode circular sexta-feira\n", plc);
            }
        } else if (strcmp(DayDaSemana, "SABADO") == 0 || strcmp(DayDaSemana, "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        } 
        else {
            printf("Dia da semana invalido\n");

        }
    } else {

        printf("Placa invalida\n");
        if( strcmp(DayDaSemana,"SEGUNDA-FEIRA" ) != 0 &&
        strcmp(DayDaSemana,"TERCA-FEIRA" ) != 0 &&
        strcmp(DayDaSemana,"QUARTA-FEIRA" ) != 0 &&
        strcmp(DayDaSemana,"QUINTA-FEIRA" ) != 0 &&
        strcmp(DayDaSemana,"SEXTA-FEIRA" ) != 0 &&
        strcmp(DayDaSemana,"SABADO" ) != 0 &&
        strcmp(DayDaSemana,"DOMINGO" ) != 0 
        ) {
            printf("Dia da semana invalido\n");
        }
    }

    return 0;
}