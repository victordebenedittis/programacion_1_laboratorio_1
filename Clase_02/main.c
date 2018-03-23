#include <stdio.h>
#include <stdlib.h>
/*
   a) se ingresan numeros no se saben cuantos (dsitintos de 0)
    B)mostrar: cantidad de pares; impares
    C)porcentaje de positivos y negativos
    D)maximo y minimo
    E)maximo numero par
    F)cantidad de numeros comprendidos entre 125 y 236

*/
int main()
{
    int numeros;
    char respuesta='s';

    int par=0;
    int impar=0;
    int contador=0;
    int numeroMaximo;
    int numeroMinimo;
    float parMaximo;
    int acumuladorNumeros=0;
    int contadorPositivos=0;
    int contadorNegativos=0;
    int positivo;
    int negativo;
    int flag=0;
    float porcentajeNegativo;
    float porcentajePositivo;


    while(respuesta!='n')
    {
        contador++;

        printf("\n ingrese un numero ");
        scanf("%d",&numeros);
       // VALIDACION
        while(numeros==0)
    {
        printf("\n Error,ingrese un numero distinto de 0 ");
        scanf("%d",&numeros);
    }
    // PAR E IMPARES
        if(numeros%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        // MAXIMOS Y MINIMOS
      /*
      EJMPLO LARGO CON CONTADOR
       if(contador==1)
        {
            numeroMaximo=numeros;
            numeroMinimo=numeros;
        }
        else
        {
            if(numeros>numeroMaximo)
            {
                numeroMaximo=numeros;
            }
            else
            {
                numeroMinimo=numeros;
            }


        }*/

        // NUEMERO MAXIMO Y MINIMO CON FLAG
        if(flag==0 || numeros>numeroMaximo)
        {
            numeroMaximo=numeros;

        }
        if(flag==0 || numeros<numeroMinimo)
        {
            numeroMinimo=numeros;
            flag=1;

        }
        // PAR MAXIMO
        if(numeros%2==0 && numeros==numeroMaximo)
        {
            parMaximo=numeros;
        }
        // NUMEROS ENTRE 125 Y 236
        if(numeros>125 && numeros<236)
        {
            acumuladorNumeros++;
        }
        // POSITIVOS Y NEGATIVOS

        if(numeros>0)
            {
                contadorPositivos++;
            }
        else
            {
                contadorNegativos++;
            }

        printf("\n Ingrese no para salir ");

        respuesta=getche();


    }
    contador=contadorPositivos+contadorNegativos;
    porcentajePositivo=(float)(contadorPositivos*100)/contador;
    porcentajeNegativo=(float)(contadorNegativos*100)/contador;

    printf("\nla cantidad de pares es: %d ",par);
    printf("\nla cantidad de impares es: %d ",impar);

    printf("\nel numero maximo es: %d " ,numeroMaximo);
    printf("\nel numero minimo es: %d " ,numeroMinimo);

    printf("\nel numero par maximo es: %.f " ,parMaximo);

    printf("\nla cantidad de numeros entre 125 y 236 es: %d " ,acumuladorNumeros);

    printf("\nEl porcentaje de positivos es: %.2f ", porcentajePositivo);
    printf("\nEl porcentaje de negativos es %.2f ", porcentajeNegativo);


    return 0;
}











    /*int numeros;
    char l;

    printf("ingrese un numero");
    scanf("%d", &n),

    printf("ingrese un caracter: ");

    /*fflush(stdin);
    scanf("%c", &l);*/

    /*l = getche();//ejecuta directo // getchew muestra el caracter presionado getch oculta la tecla presionada


    printf(" %d--%c ", n, l); */
