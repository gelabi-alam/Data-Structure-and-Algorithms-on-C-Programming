#include <stdio.h>

int main()
{
    int i, n, even[101];
    int sum = 0;

    for(i = 0; i < 101; i++)
    {
        even[i] = 0;
    }
    for(i = 0; i < 101; i+=2)
    {
        even[i] = 1;
    }

    scanf("%d", &n);

    if(even[n])
    {
        printf("The number is Even: %d", n);
    }
    else
    {
        printf("The number is Odd: %d", n);
    }

    return 0;
}
