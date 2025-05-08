#include <stdio.h>

// ume
void disp_stick(int height)
{
  printf("X\n");
  printf("X\n");
  printf("X\n");
  printf("X\n");
  printf("X\n");
  
  return;
}

// iso
void disp_triangle(int height)
{
  printf("    X\n");
  printf("   XXX\n");
  printf("  XXXXX\n");
  printf(" XXXXXXX\n");
  printf("XXXXXXXXX\n");
  
  return;
}

// haji
void disp_triangle_reverse(int height)
{
  printf("XXXXXXXXX\n");
  printf(" XXXXXXX\n");
  printf("  XXXXX\n");
  printf("   XXX\n");
  printf("    X\n");

  return;
}

// tsuna
void disp_square(int height)
{
  for(int i = 0; i < height; i++){
    printf("XXXXX\n");
  }

  return;
}

