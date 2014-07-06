#include <stdio.h>
#include "2048.h"

int shift_left(int *a) {
    int i;
    for (i=2; i>0; i--) {
        int j;
        for (j=3; j>=1; j--) {
            if (a[j] != 0 && a[j-1] == 0) {
                a[j-1] = a[j];
                a[j] = 0;
            }
        }
    }
    return 0;
}

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left

  // combine tiles as required

  return 0;
}
