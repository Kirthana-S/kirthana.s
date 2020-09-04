
#include <stdio.h>
#include<string.h>

int main()
{
    int n,a,b,c,d,e,a1,b1,c1,d1,e1;
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("Enter the 1st student Quarterly marks:\n");
   
    printf("English-");
    scanf("%d\n",&a);
    
    printf("Tamil-");
    scanf("%d\n",&b);
    
    printf("Math-");
    scanf("%d\n",&c);
    
    printf("Science-");
    scanf("%d\n",&d);
    
    printf("Social Science-");
    scanf("%d\n",&e);
    
    printf("Enter the 1st student Half yearly marks:\n");
    printf("English-");
    scanf("%d\n",&a1);
    
    printf("Tamil-");
    scanf("%d\n",&b1);
    
    printf("Math-");
    scanf("%d\n",&c1);
    
    printf("Science-");
    scanf("%d\n",&d1);
    
    printf("Social Science-");
    scanf("%d\n",&e1);
    
    
    printf("Average of i student:\n");
    printf("English-%d",(a+a1)/2);
    printf("Tamil-%d",(b+b1)/2);
    printf("Math-%d",(c+c1)/2);
    printf("Science-%d",(d+d1)/2);
    printf("Social Science-%d",(e+e1)/2);
        
   
}
