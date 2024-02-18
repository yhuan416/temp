#include "1.h"

// skip_counter
int skip_counter_increase(struct counter_t *self)
{
    self->count += 2;
    return self->count;
}

static const struct counter_i skip_counter_interface = {
    .increase = (increase_fn)skip_counter_increase,
};

void skip_counter_initialize(struct counter_t *self, int initial_value)
{
    self->interface = &skip_counter_interface;
    self->count = initial_value;
}
