#include <stdio.h>
 
int main() {
 
    int tl, tc;
    int l, c, lmax, cmax, lmin, cmin, t;
    int maior=-99999999, menor=99999999;
    int m[1000][1000];
    scanf("%d %d", &tl, &tc);
    for(l=0; l<tl; l++) {
        for(c=0; c<tc; c++) {
            scanf("%d", &m[l][c]);
            if(m[l][c]<menor) {
                menor=m[l][c];
                lmin=l;
                cmin=c;
            }
            if(m[l][c]>maior) {
                maior=m[l][c];
                lmax=l;
                cmax=c;
            }
        } 
    }
    t=m[lmax][cmax];
    m[lmax][cmax]=m[lmin][cmin];
    m[lmin][cmin]=t;
    for(l=0; l<tl; l++) {
        for(c=0; c<tc; c++) {
            printf("%d ", m[l][c]);
        } 
        printf("\n");
    }
 
    return 0;
}