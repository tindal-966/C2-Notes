#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i , sum = 0;

    for (i = 0; i < argc; i++)
        sum += atoi(argv[i]);

    return 0;
}
