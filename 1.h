#ifndef _1_H_
#define _1_H_

#include <stdio.h>

typedef int (*increase_fn)(void *counter);

struct counter_i {
    increase_fn increase;
};

struct counter_t {
    const struct counter_i *interface;
    int count;
};

#endif // _1_H_
