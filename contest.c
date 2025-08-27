#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0, i = 0, s = 0, d = 0, j = -1, p = 0, k = 0, h = 0, t = 0;
    scanf ("%d", &n);
    int a[n];
    int b[n];
    int c[n];
    for (i = 0; i < n; i++)
    {
        scanf ("%d %d", &a[i], &c[i]);
        b[i] = a[i];
    }

    scanf ("%d", &s);
    for (i = 0; i<n-1; i++)
    {
        if (a[i]>a[i+1])
        {
            h = a[i+1];
            a[i+1]=a[i];
            a[i] = k;
            t = c[i+1];
            c[i+1]=c[i];
            c [i] = t;
        }
    }

    while (s>d)
    {
        j++;
        d+=a[j];
    }
    if (d>s) j--;

    for ( i = 0; i < j+1; i++ )
    {
        k+=c[i];
    }

    printf ("%d %d", j+1, k);



}
