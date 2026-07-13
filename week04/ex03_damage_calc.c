#include <stdio.h>
#include <math.h>

int main()
{
    int Player_Attack;
    int Enermy_Defense;
    int Hit_Number;
    int Enermy_HP = 500;

    printf("[ Damage Calculator ]\n");
    printf("Enter Player Attack: ");
    scanf("%d", &Player_Attack);
    printf("Enter Enemy Defense: ");
    scanf("%d", &Enermy_Defense);
    printf("Enter Hit Number: ");
    scanf("%d", &Hit_Number);

    int base_damage = Player_Attack - Enermy_Defense;
    int critical_damage = base_damage * 3 / 2;
    if (base_damage > 0 && (base_damage % 2) != 0)
        critical_damage++;

    if (Hit_Number % 5 == 0)
    {
        printf("\n[ OUTPUT ]\n");
        printf("Player Attack: %d\n", Player_Attack);
        printf("Enemy Defense: %d\n", Enermy_Defense);
        printf("Hit Number: %d\n", Hit_Number);
        printf("Damage = %d *** CRITICAL HIT x1.5 ***\n", critical_damage);
        int Enemy_HP = 500;
        Enemy_HP -= critical_damage;
        printf("Enemy HP: %d\n", Enemy_HP);
    }
    else
    {
        printf("\n[ OUTPUT ]\n");
        printf("Player Attack: %d\n", Player_Attack);
        printf("Enemy Defense: %d\n", Enermy_Defense);
        printf("Hit Number: %d\n", Hit_Number);
        printf("Damage = %d (Normal)\n", base_damage);
        int Enemy_HP = 500;
        Enemy_HP -= base_damage;
        printf("Enemy HP: %d\n", Enemy_HP);
    }

    return 0;
}