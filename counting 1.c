#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int count=0;
    for(int i=a;i<=b;i++){
        int j=i%10;
        if(j==1){
            count++;
            
        }
        if(i==10 || i==100 || i==1000 || i==10000){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
