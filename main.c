#include <stdio.h>
#include "disp_util.h"

int main()
{
  // 棒
  disp_stick(5);
  printf("\n");

  // 三角
  disp_triangle(5);
  printf("\n");

  // 逆三角
  disp_triangle_reverse(5);
  printf("\n");

  // 四角
  disp_square(5);
  printf("\n");

  return 0;
}
