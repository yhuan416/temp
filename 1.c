/**
 * @file 1.c
 * @author yhuan (yhuan416@foxmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>

#include "1.h"

void normal_counter_initiaize(struct counter_t *self, int initial_value);
void skip_counter_initialize(struct counter_t *self, int initial_value);

/**
 * @brief increase
 * 
 * @param c 
 * @param prefix 用于打印输出
 * @return int 
 */
int increase(struct counter_i **c, const char *prefix)
{
    int r;
    r = (*c)->increase(c);
    printf("%s is: %d\n", prefix, r);
    return r;
}

int main(int argc, char const *argv[])
{
    struct counter_t count1;
    struct counter_t count2;

    normal_counter_initiaize(&count1, 0);
    increase((struct counter_i **)&count1, "count1");
    increase((struct counter_i **)&count1, "count1");
    increase((struct counter_i **)&count1, "count1");

    skip_counter_initialize(&count2, 0);
    increase((struct counter_i **)&count2, "count2");
    increase((struct counter_i **)&count2, "count2");
    increase((struct counter_i **)&count2, "count2");

    return 0;
}
