#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%9==0){
        printf("9");
    }
    else{
        printf("%d",a%9);
    }
    return 0;
}
