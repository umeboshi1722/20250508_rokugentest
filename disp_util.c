#include <stdio.h>

// ume
void disp_stick(int height)
{
  for(int i = 0; i < height; i++){
    printf("X\n");
  }
  
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
  for(int i = 1; i <= height; i++){
    for(int j = 1; j <= i-1; j++){
      printf(" ");
    }
    for(int k = 1; k <= 2*(height-i)+1 ; k++){
      printf("X");
    }
    printf("\n");
  }
  
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

