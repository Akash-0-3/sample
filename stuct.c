#include <stdio.h>
struct student{
    int rollNo;
    char name[20];
    float a,b,c;
};

int main() {
    struct student obj;
    scanf("%d",&obj.rollNo);
    getchar();
    scanf("%[^\n]s",&obj.name);
    scanf("%f",&obj.a);
    scanf("%f",&obj.b);
    scanf("%f",&obj.c);
    printf("Roll No: %d",obj.rollNo);
    printf("\nName: %s",obj.name);
    printf("\nMarks in Subject 1: %.2f",obj.a);
    printf("\nMarks in Subject 2: %.2f",obj.b);
    printf("\nMarks in Subject 3: %.2f",obj.c);

    return 0;
}
