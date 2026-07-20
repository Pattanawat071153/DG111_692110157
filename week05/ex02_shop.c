#include <stdio.h>

int main()
{
    int gold = 1000;
    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", gold);

    printf("\n1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit Shop\n");

    printf("\nSelect an item: ");
    int select;
    scanf("%d", &select);

    printf("\n=== Purchase ===\n");

    switch (select)
    {
    case 1:
        if (gold >= 50)
        {
            gold -= 50;
            printf("Health Potion purchased: 50 Gold\n");
            printf("Remaining Gold: %d\n", gold);
            printf("You gained +50 HP\n");
        }
        else
        {
            printf("Not enough gold!\n");
        }
        break;
    case 2:
        if (gold >= 80)
        {
            gold -= 80;
            printf("Mana Potion purchased: 80 Gold\n");
            printf("Remaining Gold: %d\n", gold);
            printf("You gained +30 MP\n");
        }
        else
        {
            printf("Not enough gold!\n");
        }
        break;
    case 3:
        if (gold >= 500)
        {
            gold -= 500;
            printf("Iron Sword purchased: 500 Gold\n");
            printf("Remaining Gold: %d\n", gold);
            printf("You gained +20 ATK\n");
        }
        else
        {
            printf("Not enough gold!\n");
        }
        break;
    case 4:
        if (gold >= 300)
        {
            gold -= 300;
            printf("Leather Armor purchased: 300 Gold\n");
            printf("Remaining Gold: %d\n", gold);
            printf("You gained +15 DEF\n");
        }
        else
        {
            printf("Not enough gold!\n");
        }
        break;
    case 5:
        printf("Exiting the shop.\n");
        break;
    default:
        printf("Invalid selection!\n");
    }
    printf("\nItem purchased successfully! ✅\n");
}