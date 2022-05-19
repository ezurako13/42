#include<stdio.h>

void cat(int num)
{
    num--;
    num--;
    printf("num= %d\n", num);
    if (num < 5)
        return pat(num);
    return cat(num);
}

void pat(int c)
{
    c++;
    printf("c= %d\n", c);
    if (c > 20)
        return cat(c);
    return pat(c);
}

int main()
{
    int a = 3;
    pat(a);
    return 0;
}