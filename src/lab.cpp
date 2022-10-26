#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <lab.h>
#include <labconfig.h>

#define UNUSED(x) (void)x

LAB_EXPORT int add(int a, int b)
{
    return a + b;
}

LAB_EXPORT int go(int argc, char **argv)
{
    UNUSED(argc);
    UNUSED(argv);
    printf("Function go called by main version: %d.%d\n",lab_VERSION_MAJOR,lab_VERSION_MINOR);
    return 0;
}