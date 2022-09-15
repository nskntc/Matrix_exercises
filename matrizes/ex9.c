#include <stdio.h>


int main () {

    int tl, tc;
    int l, c;
    int i;
    int maior=0, menor=1001; 
    int tam;
    double nmenor=0, nmaior=0;
    scanf("%d %d%*c", &tl, &tc);
    tam=tl*tc;
    int v[tl][tc];
    for(l=0; l<tl; l++) {
        for(c=0; c<tc; c++) {
            scanf("%d", &v[l][c]);
            if(v[l][c]<menor) menor=v[l][c];
            if(v[l][c]>maior) maior=v[l][c];
        } 
    }
    for(l=0; l<tl; l++) {
        for(c=0; c<tc; c++) {
            if(v[l][c]==menor) nmenor++;
            if(v[l][c]==maior) nmaior++;
        } 
    }
    printf("%d %.2lf%%\n", menor, ((nmenor*100)/tam));
    printf("%d %.2lf%%\n", maior, ((nmaior*100)/tam));

    return 0;
}