#include <stdio.h>

int main()

{
    int q = 23;
    int *p;
    p = &q;

    printf("Address of q: %d\n", &q);
    printf("Address of p: %d", *p);

    /**
    int p;
    int q;
    q = p;

    printf("%d\n", &p);
    printf("%d", q);
        */

    return 0;
}
