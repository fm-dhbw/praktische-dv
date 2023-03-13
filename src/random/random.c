
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    for (int i=0; i<10000; i++) {
        int r = rand() % 6 + 1;
        printf("%d\n", r);
    }
}
