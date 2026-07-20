#include <stdio.h>
#include <string.h>

int main()
{
    int max_hp;
    int damage;
    _Bool is_poisoned;
    int attack_count;
    int hp;
    char state[20];

    printf("Max HP: ");
    scanf("%d", &max_hp);

    printf("Damage Taken: ");
    scanf("%d", &damage);

    printf("Poisoned (0/1): ");
    int poisoned_input;
    scanf("%d", &poisoned_input);
    is_poisoned = (poisoned_input != 0);

    printf("Attack Count: ");
    scanf("%d", &attack_count);

    hp = max_hp - damage;
    if (hp < 0)
    {
        hp = 0;
    }

    if (hp <= 0)
    {
        strcpy(state, "DEAD");
    }
    else if ((double)hp / max_hp < 0.25)
    {
        strcpy(state, "CRITICAL");
    }
    else if (is_poisoned)
    {
        strcpy(state, "POISONED");
    }
    else
    {
        strcpy(state, "NORMAL");
    }

    printf("\n=== Character Status ===\n");
    printf("State: < %s >\n", state);

    if (attack_count > 0 && attack_count % 5 == 0)
    {
        printf("\xF0\x9F\x8C\x9F Ultimate Ready!\n");
    }
    return 0;
}
