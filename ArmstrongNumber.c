#include<stdio.h>
#include<math.h>
int main()
{
    int number,originalNumber,remainder,result=0;
    scanf("%d",&number);
    originalNumber=number;
    while(originalNumber!=0)
    {
        remainder=originalNumber%10;
        result+=remainder*remainder*remainder;
        originalNumber/=10;
    }
    if(result==number)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}
