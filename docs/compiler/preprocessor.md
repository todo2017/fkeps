# 预处理器相关学习

1. 使用gcc进行预编译分析
以hello.c为例
```hello.c

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
```
执行 gcc -E hello.c -o hello.i，打开hello.i，查看hello.i的部分内容
```hello.i
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 130 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
```

```hello.i
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4
# 2 "hello.c" 2
void print(const char *str)
{
    if (str != ((void *)0))
    {
        printf("%s%s%s\n", "hello,", str, ".\n");
    }
}

int main(int argc, char** argv)
{
    print("todo2017");
    return 0;
}
```
从上述hello.i的内容可以看出,预编译过程的一些效果
* #include <stdio.h> 被展开为stdio.h中的具体内容
* #include的展开是递归的，比如stdio.h中第34行include <bits/types.h>，types.h中的内容在被展开
* 宏定义被替换到各个宏使用的具体地方，比如说上述STRING_PREFIX和STRING_POSTFIX

