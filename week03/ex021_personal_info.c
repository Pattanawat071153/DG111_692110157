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
    printf("\nชื่อ: ");
    scanf("%s", name);
    printf("อายุ: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &GPA);
    printf("วิชาโปรด: ");
    scanf("%s", subject);
    // แสดงข้อมูลที่ป้อน
    printf("\n=== ข้อมูลส่วนตัว ===\n");
    printf("ชื่อ: %s\n", name);
    printf("อายุ: %d\n", age);
    printf("GPA: %.2f\n", GPA);
    printf("วิชาโปรด: %s\n", subject);

    return 0;
}