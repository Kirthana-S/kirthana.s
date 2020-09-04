
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter x and y\n");
    scanf("%d\n%d",&a,&b);
    printf("Before Swapping\nx=%d\ny=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping without a third variable\nx=%d\ny=%d",a,b);

    return 0;
}
