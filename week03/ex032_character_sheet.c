#include <stdio.h>

#define BAR_LENGTH 10
#define BLOCK "\u2588"

int main()
{
    char name[50];
    int HP, MaxHP;
    int ATK;
    int DEF;
    int Level;
    int PowerScore;

    printf("=== Create Character ===\n");
    printf("Name: ");
    scanf("%49s", name);
    printf("Max HP: ");
    scanf("%d", &MaxHP);
    printf("Current HP: ");
    scanf("%d", &HP);
    printf("ATK: ");
    scanf("%d", &ATK);
    printf("DEF: ");
    scanf("%d", &DEF);
    printf("Level: ");
    scanf("%d", &Level);

    PowerScore = (ATK * 2) + DEF + (HP / 10);

    if (HP > MaxHP)
        HP = MaxHP;
    if (HP < 0)
        HP = 0;

    int filled = HP * BAR_LENGTH / MaxHP;
    int percent = HP * 100 / MaxHP;

    printf("\n");
    printf("╔════════════════════════════════════╗\n");
    printf("║ %-34s ║\n", name);
    printf("╠════════════════════════════════════╣\n");
    printf("║ Level : %-27d║\n", Level);
    printf("║ HP    : %3d / %-21d║\n", HP, MaxHP);
    printf("║ ATK   : %-27d║\n", ATK);
    printf("║ DEF   : %-27d║\n", DEF);
    printf("║ Power : %-27d║\n", PowerScore);
    printf("╠════════════════════════════════════╣\n");
    printf("║ HP Bar: [");
    for (int i = 0; i < filled; i++)
        printf("%s", BLOCK);

    for (int i = filled; i < BAR_LENGTH; i++)
        printf(" ");

    printf("] %-3d%% %-8s ║\n", percent, "");
    printf("╚════════════════════════════════════╝\n");

    return 0;
}