#include <stdio.h>

int main () {

    int tl, tc;
    int l, c, l2, c2, l3, c3, tam, k=0;
    scanf("%d %d%*c", &tl, &tc);
    if(tl>0 && tl<11 && tc>0 && tc<11) {
        int m[tl][tc];
        tam=tl*tc;
        for(l=0; l<tl; l++) {
            for(c=0; c<tc; c++) {
                scanf("%d", &m[l][c]);
            }
        }
        l=0;
        c=0;
        l2=tl;
        c2=tc;
        l3=1;
        c3=0;
        while(k<tam) {
            while(c<c2) {
                printf("%d ", m[l][c]);
                c++;
                k++;
                if(k==tam) break;
            }
            if(k==tam) break;
            c--;
            l++;
            c2--;
            while(l<l2) {
                printf("%d ", m[l][c]);
                l++;
                k++;
                if(k==tam) break;
            }
            if(k==tam) break;
            l--;
            c--;
            l2--;
            while(c>=c3) {
                printf("%d ", m[l][c]);
                c--;
                k++;
                if(k==tam) break;
            }
            if(k==tam) break;
            c++;
            l--;
            c3++;
            while(l>=l3) {
                printf("%d ", m[l][c]);
                l--;
                k++;
                if(k==tam) break;
            }
            if(k==tam) break;
            l++;
            c++;
            l3++;
        }
        printf("\n");
    }
    else {
        printf("Dimensao invalida\n");
    }

    return 0;
}