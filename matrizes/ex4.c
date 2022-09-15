#include <stdio.h>

#define max 10

int main() {

    int m[max][max];
    int tl, tc;
    int l, c;
    int valid=0;
    while(valid!=1) {
        scanf("%d", &tl);
        if(tl>0 && tl<=max) valid++;
    }
    valid=0;
    while(valid!=1) {
        scanf("%d", &tc);
        if (tc>0 && tc<=max) valid++;
    }
    valid=0;
    for(l=0; l<tl; l++) {
        for(c=0; c<tc; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    l=0;
    while(l<tl) {
        printf("linha %d: ", l+1);
        for(c=0; c<tc; c++) {
            printf("%d", m[l][c]);
            if(c<(tc-1)) printf(",");
        }
        printf("\n");
        l++;
    }

    return 0;
}