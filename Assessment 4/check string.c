#include <stdio.h>

int main()
{
    char s[10];
    printf("Enter the string\n");
    scanf("%s",s);
    int i=0,lowc=0,uprc=0,splc=0,num=0;
    int len=0;
    while(s[i]!='\0')
    {
        if(s[i]>=97 && s[i]<=122 )
        {
            lowc++;            
        }
        if(s[i]>=65 && s[i]<=90)
        {
            uprc++;
        }
        if(s[i]>=48 && s[i]<=57)
        {
            num++;
        }
        if((s[i]>=33 && s[i]<=47) || (s[i]>=58 && s[i]<=64) || (s[i]>=91 && s[i]<=96) || (s[i]>=123 && s[i]<=126))
        {
            splc++;
        }
        len++;
        i++;
    }
    if(len<8)
        printf("Should be of length 8");
    else if(lowc==0)
        printf("Should contain atleast one lower-case");
    else if(uprc==0)
        printf("Should contain atleast one upper-case");
    else if(splc==0)
        printf("Should contain atleast one special-case");
    else
        printf("Valid string!!");
    return 0;
}
