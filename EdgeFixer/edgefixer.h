#ifndef EDGEFIXER_H
#define EDGEFIXER_H

#include <stdint.h>

typedef uint8_t pixel_t;

void process_edge(pixel_t *x, const pixel_t *y, int x_dist_to_next, int y_dist_to_next, int n, int radius);

#endif
