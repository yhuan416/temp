/**
 * @file skip_counter.c
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
 * @brief skip_counter_increase
 * 
 * @param self 
 * @return int 
 */
int skip_counter_increase(struct counter_t *self)
{
    self->count += 2;
    return self->count;
}

/**
 * @brief 跳数计数器接口
 * 
 */
static const struct counter_i skip_counter_interface = {
    .increase = (increase_fn)skip_counter_increase,
};

/**
 * @brief 初始化一个跳数计数器
 * 
 * @param self 句柄
 * @param initial_value 初始值
 */
void skip_counter_initialize(struct counter_t *self, int initial_value)
{
    self->interface = &skip_counter_interface;
    self->count = initial_value;
}
