#include <stdio.h>
 
int main(void)
{
    float c, f;
 
    printf("A temperatura em F e = "); scanf("%f", &f);
 
    c = (f - 32) * 5 / 9;
 
    printf("A temperatura em C e  = %f", c);
 
    return(0);
}
