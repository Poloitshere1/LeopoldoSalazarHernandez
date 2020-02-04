#include <stdio.h>

int main()
{
int n=0, z=90;
int y = z-n;
int x = 90-y;
if (x<0)
{
    x = x * -1;
}
int g = 180-y;
if (g<0)
{
    g = g * -1;
}
printf ("El complementario de n = "+x);
printf ("El suplementario de n = "+g);
  
  
}
