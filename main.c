#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);
  int i;
  for (i = 0; i < 500; i += 5) {
    c.red = (int) (i / 500.0 * 255);
    draw_line(0, 0, i, 500, s, c);
  }
  c.red = 0;
  for (i = 0; i < 500; i += 5) {
    c.blue = (int) (i / 500.0 * 255);
    draw_line(0, 0, 500, i, s, c);
  }
  c.blue = 0;
  c.red = MAX_COLOR;
  for (i = 0; i < 500; i += 5) {
    c.green = (int) (i / 500.0 * 255);
    draw_line(499, 0, i, 500, s, c);
  }
  c.green = 0;
  for (i = 0; i < 500; i += 5) {
    c.blue = (int) (i / 500.0 * 255);
    draw_line(499, 0, 500, i, s, c);
  }
  display(s);
  save_extension(s, "lines.png");
  
}
