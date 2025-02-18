#include<stdio.h>
int main()
{
    int choice;
    float num1,num2,result;
    float divisionResult;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        scanf("%d %d",&num1,&num2);
        result=num1+num2;
        printf("%d",result);
        break;
    case 2:
        scanf("%d %d",&num1,&num2);
        result=num1-num2;
        printf("%d",result);
        break;
    case 3:
        scanf("%d %d",&num1,&num2);
        result=num1*num2;
        printf("%d",result);
        break;
    case 4:
        scanf("%d %d",&num1,&num2);
        divisionResult=(float)num1/num2;
        printf("%.2f",divisionResult);
        break;
    case 5:
        scanf("%d %d",&num1,&num2);
        result=num1%num2;
        printf("%d",result);
        break;
    case 6:
        scanf("%d",&num1);
        result=num1*num1;
        printf("%d",result);
        break;
    default:
        printf("\n");
    }
    return 0;
}
