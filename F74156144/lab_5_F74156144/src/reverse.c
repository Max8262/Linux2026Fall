#include <string.h>
#include "../include/reverse.h"

char *reverse(char *dest, const char *src)
{
    size_t n = strlen(src);
    for (size_t i = 0; i < n; i++)
        dest[i] = src[n - 1 - i];
    dest[n] = '\0';          /* the terminator is required */
    return dest;
}
