#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  if (x1 > x0 && y1 > y0 && x1 - x0 >= y1 - y0) {
    //1st octant
    int a = y1 - y0; //delta y
    int b = x0 - x1; //delta x
    int d = a + b/2; //change factor
    int x = x0; //initial x
    int y = y0; //initial y
    while (x < x1) {
      plot(s, c, x, y);
      x++;
      if (d > 0) {
	y++;
	d += b;
      }
      d += a;
    }
  }
  
  else {
    printf("Sorry! this type of line is not yet implemented\n");
  }
}
