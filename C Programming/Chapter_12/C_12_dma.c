#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int));
    ptr[0] = 23463;
    ptr[1] = 24735;
    // free(ptr);
    ptr[2] = 57352;
    ptr[3] = 73265;
    ptr[4] = 13462;
    printf("%d, %d\n", ptr[1], ptr[3]);

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    ptr[7] = 374;
    printf("%d\n", ptr[7]);

    return 0;

}