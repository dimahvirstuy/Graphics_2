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

  draw_line(0, 0, 400, 300, s, c);
  display(s);
  //draw_line(0, 0, 400, 300, s, c);
  save_extension(s, "lines.png");
  
}
