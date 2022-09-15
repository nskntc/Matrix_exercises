#include <stdio.h>

#define max 1000

int main () {

    int m[max][max];
    int l, c;
    int ordem;
    int dsec;
    scanf("%d", &ordem);
    for(l=0; l<ordem; l++) {
        for(c=0; c<ordem; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    c--;
    l=0;
    while(l<ordem) {
        dsec=m[l][c];
        printf("%d\n", dsec);
        l++;
        c--;
    }
    return 0;
}