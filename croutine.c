#include <stdio.h>

struct counter;

struct counter_interface {
    int (*step)(struct counter *self);
};

struct counter {
    struct counter_interface vtable;
    int count;
};

int step_increase(struct counter *self)
{
    return ++self->count;
}

int step_decrease(struct counter *self)
{
    return --self->count;
}

int count1_init(struct counter *self, int initlal_value)
{
    self->vtable.step = step_increase;
    self->count = initlal_value;
}

int counter_step(struct counter *self)
{
    struct counter_interface *counter = (struct counter_interface *)self;
    return counter->step(counter);
}

int main(int argc, char const *argv[])
{
    struct counter count1;

    count1_init(&count1, 0);

    printf("count1: %d\n", counter_step(&count1));
    printf("count1: %d\n", counter_step(&count1));
    printf("count1: %d\n", counter_step(&count1));

    return 0;
}
