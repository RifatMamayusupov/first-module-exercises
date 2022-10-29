#include <stdio.h>
#include <math.h>
#include <string.h>
// 25 String
int main()
{
    char q;
    int res = 0;
    while (scanf("%c", &q) == 1)
    {
        if (q != '0' && q != '1')
        {
            if (q == '\n')
                break;
        }
        res = res * 2 + (q - '0'); // 0 * 2 + (0 - 0) = 
        printf("%d = %d * 2 + (%c - %c) = %d\n", res/2, res/2, q, '0', res);  
    }
    printf("Natija: %d\n", res);

    return 0;
}
