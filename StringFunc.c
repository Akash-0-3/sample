#include<stdio.h>
#include<string.h>
#include<ctype.h>
void stringlength(const char *str)
{
    printf("Length of string: %d",strlen(str));
}
void stringcopy(const char *src,char *dest)
{
    strcpy(dest,src);
}
void stringcompare(char *str1,char *str2)
{
    printf("Comparing '%s' and '%s': ",str1,str2);
    if(strlen(str1)<strlen(str2))
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
    int len=strlen(str);
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
        str[i]=tolower((unsigned char)str[i]);

    }
}
void stringupper(char *str)
{
    for(int i=0;str[i] != '\0';i++)
    {
        str[i]=toupper((unsigned char)str[i]);
    }
}
void stringconcat(const char *str1,const char *str2)
{
    char result[200];
    strcpy(result, str1);
    strcat(result, str2);



}

int main()
{
    char str1[100],str2[100],str3[100];
    fgets(str1,sizeof(str1),stdin);
    stringlength(str1);
    stringcopy(str1,str3);
    printf("\nCopied string: %s", str3);
    printf("Enter the second string for comparision: ");
    fgets(str2,sizeof(str2),stdin);
    stringcompare(str1,str2);
    stringreverse(str1);
    printf("\nReversed string: %s", str1);
    stringreverse(str1);
    stringlower(str1);
    printf("\nLowercase String: %s",str1);
    stringupper(str1);
    printf("Uppercase String: %s",str1);
    stringconcat(str1,str2);
    printf("\nConcatenated string: %s %s",str3,str2);




    return 0;

}
