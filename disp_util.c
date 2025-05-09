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
  for(int i = 1; i <= height; i++){
    for(int j = 1; j <= i-1; j++){
      printf(" ");
    }
    for(int k = 1; k <= 2*(height-i)+1 ; k++){
      printf("X");
    }
    printf("\n");
  }
  //printf("XXXXXXXXX\n");
  //printf(" XXXXXXX\n");
  //printf("  XXXXX\n");
  //printf("   XXX\n");
  //printf("    X\n");

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

