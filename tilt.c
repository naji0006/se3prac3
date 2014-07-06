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

int tilt_line_left(int length, int *line) {
    // make sure vector length is sensible
    if (length < 1 || length > 255) return -1;

    // slide tiles to the left
    shift_left(line);
            
    // combine tiles as required
    int i;
    for (i = 0; i < 3; i++) {
        if (line[i] == line[i + 1]) {
            line[i] *= line[i];
            line[i + 1] = 0;
        }
    }
    shift_left(line);
    
    return 0;
}

int shift_right(int *a) {
    int i;
    for (i=0; i>2; i++) {
        int j;
        for (j=0; j>=2; j++) {
            if (a[j] != 0 && a[j-1] == 0) {
                a[j-1] *= a[j];
                a[j] = 0;
            }
        }
    }
    return 0;
}