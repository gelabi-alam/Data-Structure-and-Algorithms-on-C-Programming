#include <stdio.h>

int main()
{
    int d, n, i, j, k, count;
    scanf("%d", &n);

    count = 0;
    d = 0;

    for(i = 0; i < n; i++)
    {
        d = d +1;
        printf("i = %d\n", i);

        for(j = 0; j < n; j++)
        {
            //printf("j = %d\n", j);
            for(k =0; k < n; k++)
            {
                count = count + 1;
            }
        }
    }

    printf("Count %d", count);

    return 0;
}
