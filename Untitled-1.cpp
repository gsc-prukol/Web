#include <stdio.h>

int main()
{
    char a;
    a = 'P';
    char * b;
    b = "P";
    printf("%c char 'P'\n", a);
    printf("%s char \"P\"\n", b);
    printf("%d sizeof(a) %s\n", sizeof(a), typeid(a).name);
    printf("%d sizeof(b) %s\n", sizeof(b), typeid(b).name);
    printf("%d sizeof(\"P\") %s\n", sizeof("P"), typeid("P").name);
    printf("%d sizeof('P') %s\n", sizeof('P')), typeid('P').name;
    return 0;
}