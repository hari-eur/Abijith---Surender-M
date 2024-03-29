#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* sort(char str[]){
    
    int n = strlen(str);
    char pre =  str[0];
    int start = 0, end = 0;
    int i=1;
    
    while( i != n+1){
    
        char after = str[i];
        
        if( ( (pre>='0' && pre<='9') && (after>='a' && after <= 'z') ) || ((pre>='a' && pre<='z') && (after>='0' && after <= '9')) || (i == n) ){
            end = i;
            for(int m =  start ; m < end ; m++){
                for(int n = m ; n < end  ; n++){
                    if(str[m] > str[n]){
                       char temp = str[m];
                       str[m] = str[n];
                       str[n] = temp;
                    }
                }
            }
            start = end;
            pre  = str[end];
        }
        i++;
    }
    
    return str;
}

int main()
{
   char str[100];
    scanf("%s", str);
    char* ans = sort(str);
    printf("%s\n",ans);
}