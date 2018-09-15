/*
 * Este programa ayudara al usuario a calcular su BMI y asi saber si tiene sobre peso, bajo peso o esta en su peso ideal
 * Nombre: Óscar Rubén Gómez Ríos
 * Matricula: A01411750
 * Correo:A01411750@itesm.mx
 */
#include <stdio.h>

float bmim (float x, float y)
{
    return y/(x*x);
}

float bmii (float x, float y)
{
    return (y/(x*x))*703;
}



int main() {
    char s;

    printf("Hi!\nI'm going to calculate your BMI\n"
           "Enter the M to the Metric units\nInsert your Metric Units\nInsert I for Imperial Units\n\n");
    scanf("%c", &s);


    float bmi;

    if (s == 'm' || s == 'M')
    {
        float h = 0;
        float w = 0;

        printf("What's your height in meters?\n");
        scanf("%f", &h);
        printf("What's your weight in kg?\n");
        scanf("%f", &w);

        bmi = bmim(h, w);

        printf("Your BMI is %f\n", bmi);
    }

    else if(s=='i'||s=='I')
    {
        float h = 0;
        float w = 0;

        printf("What's your height in inches?\n");
        scanf("%f", &h);
        printf("What's your weight in pounds?\n");
        scanf("%f", &w);

        bmi = bmii(h, w);

        printf("Your BMI is %f\n", bmi);
    }

    else
    {
        printf("Error, didn't recieved input");
        return 0;
    }

    if (bmi<18.50)
    {
        printf("You're underweight");
    }
    if (18.50<=bmi && bmi<25)
    {
        printf("You have a healthy weight!");
    }
    if (25<=bmi && bmi<=30.00)
    {
        printf("You're overweight");
    }
    if (29.00<bmi)
    {
        printf("You're obese");
    }

    return 0;
}
