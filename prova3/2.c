#include <stdio.h>

int main() {

    int dim;
    int l, c, l2;
    int k=0, t=0;
    scanf("%d", &dim);
    int m[dim][dim];
    int m2[dim][dim];
    for(l=0; l<dim; l++) {
        for(c=0; c<dim; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    for(c=0; c<dim; c++) {
        for(l=0; l<dim; l++) {
            for(l2=0; l2<dim; l2++) {
                if(m[l][c]<=m[l2][c]) k++;
                if(m[l][c]==m[l2][c]) t++;
            }
            t--;
            if(t==0) m2[dim-k][c]=m[l][c];
            else {
                while(t!=-1) {
                    m2[(dim-k)+t][c]=m[l][c];
                    t--;
                }
            }
            k=0;
            t=0;
        }
    }
    
    for(l=0; l<dim; l++) {
        for(c=0; c<dim; c++) {
            printf("%d ", m2[l][c]);
        }
        printf("\n");
    }



    return 0;
}