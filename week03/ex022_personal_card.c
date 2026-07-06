#include <stdio.h>

int main()
{
    // ประกาศตัวแปร
    char name[50];
    int age;
    float GPA;
    char subject[50];
    // รับค่าจากผู้ใช้
    printf("=== ป้อนข้อมูล === ");
    printf("\nName: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &GPA);
    printf("Major: ");
    scanf("%s", subject);

    // แสดงcard
    printf("\n=== PERSONAL CARD===\n");
    printf("┌──────────────────────────┐\n");
    printf("│ Name : %-17s │\n", name);
    printf("│ Age : %-18d │\n", age);
    printf("│ GPA : %-18.2f │\n", GPA);
    printf("│ Major: %-17s │\n", subject);
    printf("└──────────────────────────┘\n");

    return 0;
}