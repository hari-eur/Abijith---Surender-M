
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);

    
    switch(a>b)
    {   
       
        case 0: 
            printf("%d is maximum", b);
            break;

        case 1: 
            printf("%d is maximum", a);
            break;
    }

    return 0;
}