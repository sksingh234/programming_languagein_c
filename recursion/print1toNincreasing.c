#include <stdio.h>
//  first method to print no in increasing form.
void increasing(int x, int n)
{
    if (x > n)
        return;
    printf("%d\n", x);
    increasing(x + 1, n);
    return;
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    increasing(1, n);
    return 0;
}