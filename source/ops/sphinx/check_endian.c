#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int a=0x01234567;
    char * c=(char *)&a;
    if ( *c == 0x67 )
        printf("little endian\n");
    else if ( *c == 0x01 )
        printf("big endian\n");

    return 0;
}
