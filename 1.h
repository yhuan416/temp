#ifndef _1_H_
#define _1_H_

#include <stdio.h>

typedef int (*increase_fn)(void *counter);

struct counter_i {
    increase_fn increase; /** @brief 通用接口 increase */
};

struct counter_t {
    const struct counter_i *interface; /** @brief 接口域 */
    int count; /** @brief 数值域 */
};

#endif // _1_H_
