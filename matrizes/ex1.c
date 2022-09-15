#include <stdio.h>

#define max 2

int main() {

    double m[max][max];
    int l, c;
    double determin;
    for(l=0; l<max; l++) {
        for(c=0; c<max; c++) {
            scanf("%lf", &m[l][c]);
        }
    }
    determin=m[0][0]*m[1][1]-m[1][0]*m[0][1];
    printf("%.2lf\n", determin);
    return 0;
}