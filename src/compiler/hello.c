#include <stdio.h>

#define STRING_PREFIX "hello,"
#define STRING_POSTFIX ".\n"

void print(const char *str)
{
    if (str != NULL)
    {
        printf("%s%s%s\n", STRING_PREFIX, str, STRING_POSTFIX);    
    }
}

int main(int argc, char** argv)
{
    print("todo2017");
    return 0;
}
