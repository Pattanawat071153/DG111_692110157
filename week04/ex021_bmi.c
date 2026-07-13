#include <stdio.h>

int main()
{
    printf("[ BMI Calculator ]\n");

    float kg;
    printf("Enter your weight in kg: ");
    scanf("%f", &kg);

    float cm;
    printf("Enter your height in cm: ");
    scanf("%f", &cm);

    float m = cm / 100;
    float bmi = kg / (m * m);

    printf("\n[ OUTPUT ]\n");
    printf("Input weight(kg): %.2f kg\n", kg);
    printf("Input height(cm): %.2f cm\n", cm);

    if (bmi < 18.5)
        printf("Output BMI: %.2f --> underweight.\n", bmi);
    else if (bmi >= 18.5 && bmi < 25)
        printf("Output BMI: %.2f --> normal weight.\n", bmi);
    else if (bmi >= 25 && bmi < 30)
        printf("\n Output BMI: %.2f --> overweight.\n", bmi);
    else if (bmi >= 30)
        printf("Output BMI: %.2f --> obese.\n", bmi);

    return 0;
}