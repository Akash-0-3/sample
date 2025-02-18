#include<stdio.h>
int main()
{
    char name[50];
    int age;
    char address[100];
    char phone_num[50];
    printf("Enter name:");
    gets(name);
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter address:");
    fgets(address,100,stdin);
    printf("Enter phone:");
    scanf("%d",&phone_num);

    printf("Name:%s\n",name);
    printf("Age:%d\n",age);
    printf("Address:%s\n",address);
    printf("Phone Number:%s",phone_num);
    return 0;

}
