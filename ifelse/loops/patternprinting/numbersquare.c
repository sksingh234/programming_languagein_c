#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of lines:");
    scanf("%d", &n);
    int m;
    printf("enter the value of stars:");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}