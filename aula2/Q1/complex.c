#include <stdlib.h>
#include <math.h>

#include "complex.h"

/*
 * implementation of the Complex API
 */

complex* complex_new(double x, double y) {
   complex* z = (complex*) malloc(sizeof(complex));
   z->x = x;
   z->y = y;
   return z;
}

complex* complex_add(complex* z, complex* w){
   return complex_new(z->x + w->x, z->y + w->y);
}

complex* complex_sub(complex* z, complex* w){
   return complex_new(z->x - w->x, z->y - w->y);
}

complex* complex_mul(complex* z, complex* w){
   return complex_new(z->x * w->x - z->y * w->y,z->x * w->y + z->y * w->x);
}

complex* complex_div(complex* z, complex* w){
   double a,b,c,d,r1,r2;
   a = z->x;
   b = z->y;
   c = w->x;
   d = w->y;
   r1 = (a*c+b*d) / (c*c + d*d);
   r2 = (b*c-a*d) / (c*c + d*d);
   return complex_new(r1,r2);
}

complex* complex_conj(complex* z){
   double a,b;
   a = z->x;
   b = z->y;
   return complex_new(a,-b);
}

double complex_mod(complex* z){
   double a,b;
   a = z->x;
   b = z->y;
   return sqrt(a*a + b*b);
}

double complex_arg(complex* z){
   return atan2(z->y,z->x);
}

double complex_re(complex* z){
   return z->x;
}

double complex_im(complex* z){
   return z->y;
}
