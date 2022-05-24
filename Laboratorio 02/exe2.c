#include <stdio.h>

int main()
{
    char nome[] = "Jose Augusto";
    char *name = &nome;

    while(*name != '\0')
    {
        printf("%c", *name);
        name++;
    }

    return 0;

}
