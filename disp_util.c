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
    int i, j;

    for(i = 1; i <= height; i++){
        for(j = 1; j <= height-i; j++){
            printf(" ");
        }
        for(j = 1; j <= (2*i-1); j++){
            printf("X");
        }
        printf("\n");
    }
  
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
  printf("XXXXX\n");
  printf("XXXXX\n");
  printf("XXXXX\n");
  printf("XXXXX\n");
  printf("XXXXX\n");

  return;
}

