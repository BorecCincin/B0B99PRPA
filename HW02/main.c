// HW 02 - Načítání vstupu, výpočet a výstup
// by Cincin

#include <stdio.h>

int main() {
    int num[2];
    num[0] = 0;
    num[1] = 0;
    int sum = 0;
    int dif = 0;
    int mul = 0;
    int dev = 0;
    //float avr = 0.0; 

    //printf("Enter a number: ");
    scanf("%d %d", &num[0], &num[1]);

    if (num[0] < -10000 || num[0] > 10000) {
        printf("Vstup je mimo interval!");
        return(0);
    } else if (num[1] < -10000 || num[1] > 10000) {
        printf("Vstup je mimo interval!");
        return(0);
    } else {
        //OTUPUT DECIMAL
        printf("Desitkova soustava: ");
        printf("%d %d", num[0], num[1]);
        printf("\n");

        //OUTPUT HEX
        printf("Sestnactkova soustava: ");
        printf("%x %x", num[0], num[1]);
        printf("\n");

        //OUTPUT SUM
        printf("%s %d %s %d %s", "Soucet:", num[0], "+", num[1], "= ");
        sum = num[0] + num[1];
        printf("%d", sum);
        printf("\n");

        //OUTPUT DIFFERENCE
        printf("%s %d %s %d %s", "Rozdil:", num[0], "-", num[1], "= ");
        dif = num[0] - num[1];
        printf("%d", dif);
        printf("\n");

        //OUTPUT MULTIPLICATION
        printf("%s %d %s %d %s", "Soucin:", num[0], "*", num[1], "= ");
        mul = num[0] * num[1];
        printf("%d", mul);
        printf("\n");

        //OUTPUT DEVIDE
        if (num[1] == 0) {
            printf("Nedefinovany vysledek!");
            printf("\n");
        } else {
            printf("%s %d %s %d %s", "Podil:", num[0], "/", num[1], "= ");
            dev = num[0] / num[1];
            printf("%d", dev);
            printf("\n");
        }

        //OUTPUT AVRAGE
        printf("Prumer: ");
        double avr = (float)(num[0] + num[1]) / 2;
        printf("%.1f", avr);
        printf("\n");

        return(0);
    }

    

    
    //----------- TEST SAMPLES -----------
    /*
    -- 11 24 --

    Desitkova soustava: 11 24
    Sestnactkova soustava: b 18
    Soucet: 11 + 24 = 35
    Rozdil: 11 - 24 = -13
    Soucin: 11 * 24 = 264
    Podil: 11 / 24 = 0
    Prumer: 17.5            -PASSED-


   -- 152 0 --

   Desitkova soustava: 152 0
    Sestnactkova soustava: 98 0
    Soucet: 152 + 0 = 152
    Rozdil: 152 - 0 = 152
    Soucin: 152 * 0 = 0
    Nedefinovany vysledek!
    Prumer: 76.0            -PASSED-


    -- 10001 125 --

    Vstup je mimo interval! -PASSED-


    -- 212 -78 5 16 32 --

    Desitkova soustava: 212 -78
    Sestnactkova soustava: d4 ffffffb2
    Soucet: 212 + -78 = 134
    Rozdil: 212 - -78 = 290
    Soucin: 212 * -78 = -16536
    Podil: 212 / -78 = -2
    Prumer: 67.0            -PASSED-
    */
}