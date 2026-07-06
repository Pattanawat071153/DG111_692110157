#include <stdio.h>

int main()
{
    char name[50];
    int HP;
    int ATK_Power;
    int Defense;
    int Level;

    printf("=== Create Character ===\n");
    printf("Name: ");
    scanf("%s", name);
    printf("HP: ");
    scanf("%d", &HP);
    printf("ATK Power: ");
    scanf("%d", &ATK_Power);
    printf("Defense: ");
    scanf("%d", &Defense);
    printf("Level: ");
    scanf("%d", &Level);

    printf("\n=== Character Sheet ===\n");
    printf("Name: %s\n", name);
    printf("Level: %d\n", Level);
    printf("HP: %d\n", HP);
    printf("ATK Power: %d\n", ATK_Power);
    printf("Defense: %d\n", Defense);

    return 0;
}