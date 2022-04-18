#include <stdio.h>

int main()
{
    float x, money;
    int wait;
    int result;

    money = 0;
    scanf("%f %d", &x, &wait);

    if(x<=3)
        money = 10;
    else if(x<=10)
        money = 10 + (x-3)*2;
    else
        money = 10 + 14 + (x-10)*3;

    result = (int)(money+0.5) + wait/5*2;
    

    printf("%d", result);

    return 0;
}