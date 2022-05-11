#include <stdio.h>

int estado1, estado2, estado3;

int main (void)
{
    printf("Verificacao rapida de saude!\n\n");

    printf("O paciente se sente bem?     Utilize:  1 - Sim  ou  2 - Nao\n");
    scanf("%d", &estado1);
    
    if(estado1 == 1)                                                                                //Paciente se sente bem
    {    

        printf("O paciente esta saudavel!");

    }else if (estado1 == 2)                                                                         //Paciente não se sente bem
    {

        printf("O paciente sente dor?     Utilize:  1 - Sim  ou  2 - Nao\n");
        scanf("%d", &estado2);

    }   if (estado2 == 1)                                                                           //Paciente sente dor
        {

            printf("O Paciente esta doente");

        }else if (estado2 == 2)                                                                     //Paciente não sente dor
        {

            printf("A temperatura do paciente eh Maior ou Menor que 37C     Utilize:  1 - Maior ou Igual a 37C  ou  2 - Menor que 37C\n");
            scanf("%d", &estado3);

        }   if (estado3 == 2)                                                                       //Paciente tem a temperatura menor que 37C
            {

                printf("Paciente saudavel!");

            }else if (estado3 == 1)                                                                 //Paciente tem a temperatura maior que 37C
            {

                printf("Paciente doente!");

            }

    return 0;
}