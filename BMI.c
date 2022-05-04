#include <stdio.h>
#include <stdlib.h>
/*Program to determine the BMI of an individual.*/
int main()
{
    float weight = 0.0; //in pounds
    float height = 0.0; //in inches
    float BMI = 0.0; //


    char gender;

char name[]=" ";
    printf("%s", "Enter your name: ");
    scanf("%s",&name);
    fgets(name,100,stdin);
    printf("\n %s", "Enter your gender(M\F):\n ");
    scanf("%s",&gender);

    printf("\nPlease enter your weight in Pounds: ");
    scanf("%f", &weight);

    printf("Please enter your height in inches: ");
    scanf("%f", &height);

    BMI = weight*703/(height*height);

     if (BMI <= 18.5)
        printf("\n Your BMI is %f: Underweight. \n", BMI);
     else if (BMI <= 24.9)
        printf("\n Your BMI is %f: Normal. \n", BMI);
     else if (BMI <= 29.9)
        printf("\n Your BMI is %f: Overweight. \n", BMI);
     else
        printf("\n Your BMI is %f: Obese. \n", BMI);



    return 0;
}
