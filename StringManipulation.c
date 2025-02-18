#include<stdio.h>
int stringlength(const char *str)
{
    int length=0;
    while(str[length]!= '\0')
    {
        length++;
    }
    return length;
}
void stringcopy(char *copy,const char *src)
{
    int i=0;
    while(src[i] != '\0')
    {
        copy[i]=src[i];
        i++;
    }
    copy[i]= '\0';
}
void stringcompare(char *str1,char *str2)
{
    printf("Comparing '%s' and '%s': ",str1,str2);
    if(stringlength(str1)<stringlength(str2))
    {
        printf("First string is smaller");
    }
    else
    {
        printf("Second string is smaller");
    }
}
void stringreverse(char *str)
{
    int len=stringlength(str);
    for(int i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }

}
void stringlower(char *str)
{
    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+='a'-'A';
        }
    }
}
void stringupper(char *str)
{
    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-='a'-'A';
        }
    }
}
void stringconcat(char *dest,const char *src)
{
    int destlen=stringlength(dest);
    int i=0;
    while(src[i] != '\0')
    {
        dest[destlen+i]=src[i];
        i++;
    }
    dest[destlen+i]='\0';
}

int main()
{
    char str1[100],str2[100],copy[100];
    scanf("%[^\n]%*c", str1);

    printf("Length of string: %d",stringlength(str1));
    stringcopy(copy,str1);
    printf("\nCopied string: %s",copy);
    printf("\nEnter the second string for comparision: ");
    scanf("%[^\n]%*c", str2);
    stringcompare(str1,str2);
    stringreverse(str1);
    printf("\nReversed string: %s", str1);
    stringreverse(str1);
    stringlower(str1);
    printf("\nLowercase String: %s",str1);
    stringupper(str1);
    printf("\nUppercase String: %s",str1);
    stringconcat(str1,str2);
    printf("\nConcatenated string: %s",str1);



    return 0;

}
