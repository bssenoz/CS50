#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a, b, c, f, g;
    long z, y;
    int q = 0;
    int s = 0;
    int d = 0;
    int e = 0;
    long x = get_long("x: ");
    long w = x;
    long v = x;
    
    do
    {
        v = v / 10;
        s++;
    } while ((v / 10) != v);

    do
    {
        a = x % 100;
        b = a / 10;
        c = a % 10;
        e += c;

        x = x - (x % 100);
        x = x / 100;

        f = b * 2 / 10;
        g = b * 2 % 10;
        d += f + g;

    } while (x != 0);

    if ((d + e) % 10 == 0)
    {
        y = w / 100;
        z = w - (w % 100);

        do
        {
            z = z / 10;
        } while ((z % 100) != z);
        if (z == 51 || z == 52 || z == 53 || z == 54 || z == 55)
        {
            if (s == 16)
            {
                printf("MASTERCARD\n");
                q++;
            }
        }
        if (z == 34 || z == 37)
        {
            if (s == 15)
            {
                printf("AMEX\n");
                q++;
            }
        }
        if (z == 40 || z == 41 || z == 42 || z == 43 || z == 44 || z == 45 || z == 46 || z == 47 || z == 48 || z == 49)
        {
            if (s == 13 || s == 16)
            {
                printf("VISA\n");
                q++;
            }
        }
    }
    if (q == 0)
    {
        printf("INVALID\n");
    }
}