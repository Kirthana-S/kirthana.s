
#include <stdio.h>
#include<string.h>

int main()
{
    char str[]="A Global Innovation Company";
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' '){
            count++;
        }
    }
    printf("Number of Characters : %d",count);
    
   
}
