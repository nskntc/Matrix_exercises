#include "matrix.h"
#include <stdio.h>
#include <string.h>

matrix *matrix_new(int nl, int nc) {
    int l;
    matrix *m=NULL;
    m=(matrix *)calloc(1, sizeof(matrix));
    (*m).nl=nl;
    m->nc=nc;
    m->px=(uchar **)calloc(nl, sizeof(uchar *)); 
    for(l=0; l<nl; l++) {
        m->px[l]=(uchar *) calloc(nc, sizeof(uchar));
    }
    return m;
}

void matrix_free(matrix *m) {
    int l;
    for(l=0; l<m->nl; l++) {
        free(m->px[l]);
    }
    free(m->px);
    free(m);
}

matrix *read_pgm(void) {
    char tipo[32];
    int nl, nc, l, c;
    int pixel;
    matrix *m;
    scanf("%s", tipo);
    if(strcmp("P2", tipo)!=0) {
        printf("Arquivo invalido!\n");
        exit(0);
    }
    scanf("%d %d", &nc, &nl);
    m=matrix_new(nl, nc);
    for(l=0; l<nl; l++) {
        for(c=0; c<nc; c++) {
            scanf("%d", &m[c].px);
        }
    }
}