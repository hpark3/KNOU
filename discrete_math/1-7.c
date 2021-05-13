#include <stdio.h>
// for x ← 2 to 4
// {
// for y ← x to 3
//     {
//     print “*”
//     }
// print “/”;
// }

int main()
{
    for (int x = 2; x < 5; x++)    // 2부터 4까지 증가하면서 3번 반복
    {
        for (int y = x; y < 4; y++)
        {
           printf("*"); 
        }
        printf("/");
    }
    return 0;
}