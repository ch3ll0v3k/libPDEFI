#include <stdint.h>
#include <string.h>

char* strcat(char *dst, char *src) {
    size_t len = strlen(dst);
    strcpy((char*)(dst+len), src);
    return dst;
}