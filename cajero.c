#include <stdio.h>
int main (void) {

    char billetesde1;

    char billetesde5;

    char billetesde10;

    char billetesde20;

    char billetesde50;

    char billetesde100;

    int montototal;
    printf ("Ingrese su monto a retirar: ");
    scanf ("%d",&monto);

    if (montototal<20) {
        printf ("El monto es inferior al minimo aceptado, ingrese un monto superior.");
        return 1;
    }

    else if(montototal>5000){
        printf("El monto es superior al maximo aceptado, ingrese un monto menor");
        return 2;
    }

else {
    while (montototal>=100) {
    montototal = montototal - 100;
    billetesde100++;
    }


  while (montototal>=50) {
    montototal = montototal - 50;
    billetesde50++;
    }

  while (montototal>=20) {
    montototal = montototal - 20;
    billetesde20++;
    }

      while (montototal>=10) {
    montototal = montototal - 10;
    billetesde10++;
    }

  while (montototal>=5) {
    montototal = montototal - 5;
    billetesde5++;
    }

  while (montototal>=1) {
    montototal = montototal - 1;
    billetesde1++;
    }

    printf ("Monto aceptado\n");

    printf ("billetes de 1: %d\n", billetesde1);

    printf ("billetes de 5: %d\n", billetesde5);

    printf ("billetes de 10: %d\n", billetesde10);

    printf ("billetes de 20: %d\n", billetesde20);

    printf ("billetes de 50: %d\n", billetesde50);

    printf ("billetes de 100: %d\n", billetesde100);
}
 return 0;
} 
