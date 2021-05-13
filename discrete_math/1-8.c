#include <stdio.h>
// x ← 4;
// while x >=1 do
// {
// print x;
// x ← x-1;
// }
// print "fire";

int main(void)
{
    int x = 4;
    while (x >= 1)
    {
        printf("%d", x);
        x=x-1;
        //x--;
    } 
    printf("fire");
    return(0);         
}