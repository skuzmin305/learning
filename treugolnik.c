#include <stdio.h>

int main(void)
{
    int size;
    scanf("%d", &size);
    for(int i = 1; i <= size; i++)
    {
        for(int q = 0; q < i; q++)
        {
            printf("*");
        }
        printf("       ");
        for(int z = size + 1 - i; z > 0; z--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}