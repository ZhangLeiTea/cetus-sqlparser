
#include <string.h>
#include <stdlib.h>


#ifdef _MSC_VER 
int strncasecmp(const char* s1, const char* s2, size_t n)
{
    return _strnicmp(s1, s2, n);
}

int strcasecmp(const char* s1, const char* s2)
{
    return _stricmp(s1, s2);
}

//int strcasecmp(const char* s1, const char* s2, size_t n)
//{
//    return _stricmp(s1, s2, n);
//}
#endif

char *strdup(const char *s) {
    size_t size = strlen(s) + 1;
    char *p = malloc(size);
    if (p != NULL) {
        memcpy(p, s, size);
    }
    return p;
}

char *strndup(const char *s, size_t n) {
    char *p;
    size_t n1;

    for (n1 = 0; n1 < n && s[n1] != '\0'; n1++)
        continue;
    p = malloc(n + 1);
    if (p != NULL) {
        memcpy(p, s, n1);
        p[n1] = '\0';
    }
    return p;
}