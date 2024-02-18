/**
 * @file normal_counter.c
 * @author yhuan (yhuan416@foxmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "1.h"

/**
 * @brief increase
 * 
 * @param self 
 * @return int 
 */
int normal_counter_increase(struct counter_t *self)
{
    return ++self->count;
}

/**
 * @brief 计数器接口
 */
static const struct counter_i normal_counter_interface = {
    .increase = (increase_fn)normal_counter_increase,
};

/**
 * @brief 初始化一个普通计数器
 * 
 * @param self 句柄
 * @param initial_value 初始值
 */
void normal_counter_initiaize(struct counter_t *self, int initial_value)
{
    self->interface = &normal_counter_interface;
    self->count = initial_value;
}
