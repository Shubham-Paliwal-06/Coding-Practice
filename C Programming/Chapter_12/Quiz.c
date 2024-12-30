#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 2.3463;
    ptr[1] = 2.4735;
    ptr[2] = 5.7352;
    ptr[3] = 7.3265;
    ptr[4] = 1.3462;

    for (int i = 0; i < 5; i++)
    {
        printf("%.3f\n", ptr[i]);
    }

    int *ptr1, x;
    scanf("%d", &n);
    ptr1 = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr1[i]);
    }


    return 0;

}