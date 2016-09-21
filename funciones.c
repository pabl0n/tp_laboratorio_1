#define pf printf
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void advertencia(void){
printf("\n\n*PRESIONE CUALQUIER TECLA PARA CONTINUAR*");
getche();
//system("clear");  /*   UNIX   */
system("cls");
}

/**
 * \brief Realiza la suma de 2 numeros y muestra un mensaje con el resultado
 * \param Dos numeros ingresados por el usuario
 * \return No devuelve ningun valor.
 *
 */

void suma (float num1,float num2){
float resultado=0;
resultado=num1+num2;

pf("\nEl resultado de A + B es: %.2f\n",resultado);


}

/**
 * \brief Realiza la resta de 2 numeros y muestra un mensaje con el resultado
 * \param Dos numeros ingresados por el usuario
 * \return No devuelve ningun valor.
 *
 */

void resta (float num1,float num2){
float resultado=0;
resultado=num1-num2;

pf("\nEl resultado de A - B es: %.2f\n",resultado);


}

/**
 * \brief Realiza la division de 2 numeros y muestra un mensaje con el resultado. Se valida la division por 0.
 * \param Dos numeros ingresados por el usuario
 * \return No devuelve ningun valor.
 *
 */

void division (float num1,float num2){
float resultado=0;
if(0==num2){
    printf("\nNo se puede dividir un numero por 0. Ingrese otro valor a B con la opcion 2 del menu\n");

    }
    else{
        resultado = num1/num2;
        pf("\nEl resultado de A / B es: %.2f\n",resultado);

}

}

/**
 * \brief Realiza la multiplicacion de 2 numeros y muestra un mensaje con el resultado
 * \param Dos numeros ingresados por el usuario
 * \return No devuelve ningun valor.
 *
 */

void multiplicacion (float num1,float num2){
float resultado=0;
resultado=num1*num2;

pf("\nEl resultado de A * B es: %.2f\n",resultado);



}

/**
 * \brief Realiza el factorial de un numero y muestra un mensaje con el resultado. Se valida si el el numero es menor a 0.
 * \param Un numero ingresado por el usuario
 * \return No devuelve ningun valor.
 *
 */

void factorial (float num1){

                if(num1<0){
                    printf("\nNo se puede realizar el calculo del factorial de un numero negativo. \nIngrese otro valor para A con la opcion 1 del menu\n");

                    }
                    else{
                        int i;
                        float resultado=1;

                        for(i=1;i<=num1;i++)
                        {
                        resultado = resultado * i;
                        }

                        pf("\nEl resultado del factorial de A : %.2f\n",resultado);

                    }

}

/**
 * \brief Realiza todos los calculos anteriores reutilizando las funciones desarrolladas. Por cada operacin devuelve un mensaje con su resultado.
 * \param Dos numeros ingresados por el usuario
 * \return No devuelve ningun valor.
 *
 */

void todas(float num1,float num2){

suma(num1,num2);
resta(num1,num2);
division(num1,num2);
multiplicacion (num1,num2);
factorial (num1);

}




// < >
