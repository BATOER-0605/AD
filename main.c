#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct hook{
    char name;
    struct hook *upper;
};

