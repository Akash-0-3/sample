#include<stdio.h>
int main()
{
    int n,key,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("%d",i);
            count+=1;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}
