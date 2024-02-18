#include "1.h"

// normal_counter
int normal_counter_increase(struct counter_t *self)
{
    return ++self->count;
}

static const struct counter_i normal_counter_interface = {
    .increase = (increase_fn)normal_counter_increase,
};

void normal_counter_initiaize(struct counter_t *self, int initial_value)
{
    self->interface = &normal_counter_interface;
    self->count = initial_value;
}
