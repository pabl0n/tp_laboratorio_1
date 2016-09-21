#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define pf printf

int main()
{
    char seguir='s';
    int opcion=0;
    float num1=0;
    float num2=0;
    int flag1=0;
    int flag2=0;

    while(seguir=='s')
    {


        if(0==flag1)
            printf("1- Ingresar 1er operando (A=x)\n");
        else
            printf("1- Ingresar 1er operando (A=%.2f)\n",num1);

        if(0==flag2)
            printf("2- Ingresar 2do operando (B=y)\n");
        else
            printf("2- Ingresar 2do operando (B=%.2f)\n",num2);


        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {

            case 1:

                pf("\nIngrese primer operando:\n");
                scanf("%f",&num1);
                flag1=1;
                advertencia();
                break;

            case 2:
                pf("\nIngrese segundo operando:\n");
                scanf("%f",&num2);
                flag2=1;
                advertencia();
                break;



            case 3:
                if (flag1 == 1 && flag2 == 1)
                    {
                      suma(num1,num2);
                      advertencia();
                    }
                else
                    {
                    if(flag1==0)
                        {
                            pf("\nIngrese un valor para A con la opcion 1 del menu\n");
                        }
                    if(flag2==0)
                        {
                            pf("\nIngrese un valor para B con la opcion 2 del menu\n\n");
                        }
                    advertencia();
                    }
                break;

            case 4:
                if (flag1 == 1 && flag2 == 1)
                {
                    resta(num1,num2);
                    advertencia();
                }
                else
                    {
                    if(flag1==0)
                        {
                            pf("\nIngrese un valor para A con la opcion 1 del menu\n");
                        }
                    if(flag2==0)
                        {
                            pf("\nIngrese un valor para B con la opcion 2 del menu\n\n");
                        }
                    advertencia();
                    }
                break;

            case 5:
                if (flag1 == 1 && flag2 == 1)
                {

                    division(num1,num2);
                    advertencia();
                }
                else
                    {
                    if(flag1==0)
                        {
                            pf("\nIngrese un valor para A con la opcion 1 del menu\n");
                        }
                    if(flag2==0)
                        {
                            pf("\nIngrese un valor para B con la opcion 2 del menu\n\n");
                        }
                    advertencia();
                    }

                break;

            case 6:
                if (flag1 == 1 && flag2 == 1)
                {
                    multiplicacion(num1,num2);
                    advertencia();
                }
                else
                    {
                    if(flag1==0)
                        {
                            pf("\nIngrese un valor para A con la opcion 1 del menu\n");
                        }
                    if(flag2==0)
                        {
                            pf("\nIngrese un valor para B con la opcion 2 del menu\n\n");
                        }
                    advertencia();
                    }


                break;

            case 7:
                if (flag1 == 1 && flag2 == 1)
                {
                    factorial(num1);
                    advertencia();
                }
                else
                    {
                    if(flag1==0)
                        {
                            pf("\nIngrese un valor para A con la opcion 1 del menu\n");
                        }
                    if(flag2==0)
                        {
                            pf("\nIngrese un valor para B con la opcion 2 del menu\n\n");
                        }
                    advertencia();
                    }
                break;


            case 8:
                if (flag1 == 1 && flag2 == 1)
                {
                    todas(num1,num2);
                    advertencia();
                }
                else
                    {
                    if(flag1==0)
                        {
                            pf("\nIngrese un valor para A con la opcion 1 del menu\n");
                        }
                    if(flag2==0)
                        {
                            pf("\nIngrese un valor para B con la opcion 2 del menu\n\n");
                        }
                    advertencia();
                    }
                break;

            case 9:
                seguir = 'n';
                break;

            default:
                pf("\nIngresar opcion 1 a 9\n");
                advertencia();

        }


    }//fin while

    return 0;
}
