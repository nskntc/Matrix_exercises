#include <stdio.h>

int main() {

    int m[6][6];
    int l=0, c=0;
    int i;
    int soma=0, maiorsoma=0;
    for(l=0; l<6; l++) {
        for(c=0; c<6; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    for(l=0; l<4; l++) {
        for(c=0; c<4; c++) {
            soma=m[l][c]+m[l][c+1]+m[l][c+2]+m[l+1][c+1]+m[l+2][c]+m[l+2][c+1]+m[l+2][c+2];
            if(maiorsoma==0) maiorsoma=soma;
            if(soma>maiorsoma) maiorsoma=soma;
        }
        soma=0;
    }
    printf("%d\n", maiorsoma);

    return 0;
}