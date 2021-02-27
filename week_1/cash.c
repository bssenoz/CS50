#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, m, l, k;
    int x = 0;
    float f;
    do
    {
        f = get_float("Change owed: ");
    } while (f <= 0);
    
    int a = round(f * 100);
    if (a % 25 >= 0)
    {
        n = a / 25;
        a = a - (25 * n);
        x = n + x;
    }
    if (a % 10 >= 0)
    {
        m = a / 10;
        a = a - (10 * m);
        x = m + x;
    }
    if (a % 5 >= 0)
    {
        k = a / 5;
        a = a - (5 * k);
        x = k + x;
    }

    if (a % 1 >= 0)
    {
        l = a / 1;
        x = l + x;
    }

    printf("%i\n", x);
}
